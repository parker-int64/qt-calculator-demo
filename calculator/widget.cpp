#include <QChar>
#include <QDebug>
#include "widget.h"
#include "./ui_widget.h"
#define MAXSIZE 100

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this,&Widget::SendOpe,this,&Widget::RecOpe);
    connect(this,&Widget::SendNum,this,&Widget::RecNum);
    setFixedSize(this->width(), this->height());        //禁止改变窗口大小

    ui->lineEdit->setText("0");
    flag = 0;
}


Widget::~Widget()
{
    delete ui;
}

void Widget::on_numButton_0_clicked(){
    QString inputNum = ui->lineEdit->text();
    if(inputNum != "0"){
        ui->lineEdit->insert("0");          //在末尾插入数字
        ui->lineEdit->setFocus ();          //继续追加光标
    }
}

/*
 *  按钮数字设置
*/
void Widget::on_numButton_1_clicked(){ emit SendNum(1); }

void Widget::on_numButton_2_clicked(){ emit SendNum(2); }

void Widget::on_numButton_3_clicked(){ emit SendNum(3); }

void Widget::on_numButton_4_clicked(){ emit SendNum(4); }

void Widget::on_numButton_5_clicked(){ emit SendNum(5); }

void Widget::on_numButton_6_clicked(){ emit SendNum(6); }

void Widget::on_numButton_7_clicked(){ emit SendNum(7); }

void Widget::on_numButton_8_clicked(){ emit SendNum(8); }

void Widget::on_numButton_9_clicked(){ emit SendNum(9); }


/*
*  小数点设置
*
*/
void Widget::on_dotButton_clicked(){
    QString expStr = ui->lineEdit->text();

    if(expStr.indexOf('.') < 0 && !expStr.isEmpty()){
        ui->lineEdit->insert(".");
        ui->lineEdit->setFocus();   //继续追加光标
    }
}


/*
 * 操作符号按键获取
*/
void Widget::on_plusButton_clicked(){ emit SendOpe('+'); }

void Widget::on_minusButton_clicked(){ emit SendOpe('-'); }

void Widget::on_multiButton_clicked(){ emit SendOpe('*'); }

void Widget::on_divButton_clicked(){ emit SendOpe('/'); }


/*
 * 对接收到数字进行处理
*/
void Widget::RecNum(int num)
{
    QString input_num = ui->lineEdit->text();

    if(input_num == "0")
    {
        ui->lineEdit->setText(QString::number(num));          //去掉前导0,并添加num
    }
    else
    {

        if(input_num[0]=='A' || input_num[0] == 'T')           //上一次结果的第一个字符（An 或者An或者The）
        {
            ui->lineEdit->clear();
            ui->label_show_exp->clear();
        }

        ui->lineEdit->insert(QString::number(num));          //在末尾插入数字num
    }

    ui->lineEdit->setFocus ();      //继续追加光标
}

/*
 * 接收输入运算符信号需要进行的操作
*/
void Widget::RecOpe(QChar ch){
    QString input_num0 = ui->lineEdit->text();      //获取输入的字符串

    QString ori_exp = ui->label_show_exp->text();      //获取显示板上的字符串

    if(ori_exp.isEmpty() == false)      //提交字符串不为空时
    {
        if(input_num0.isEmpty() == true)       //输入数字为空
        {
            int length = ori_exp.size();

            if(ori_exp[length-1] != ')')       //不等于右括号才能，改变输入错误的运算符号
            {
                ori_exp.replace(length-1,1,QString(ch));
                ui->label_show_exp->setText(ori_exp);
            }
            else
            {
                ui->label_show_exp->setText(ori_exp+QString(ch));       //提交运算符
            }

        }
        else
        {
            int length = ori_exp.size();

            if(ori_exp[length-1] != ')')       //不等于右括号才能加入运算符和数字
            {
                //将输入的数字和运算符提取出来，然后输出至显示板
                QRegExp rx;
                rx.setPattern("(\\.){0,1}0+$");
                bool ok;
                QString input_num = QString("%1").arg(input_num0.toDouble(&ok),0,'f',-1).replace(rx,"");
                QString input_inf = input_num+QString(ch);
                ui->label_show_exp->setText(ori_exp+input_inf);
            }
            else       //只能加入运算符
            {
                 ui->label_show_exp->setText(ori_exp+QString(ch));
            }


        }

        ui->lineEdit->clear();
       ui->lineEdit->setFocus ();       //取回焦点
    }       //已经提交（在显示板上显示的）的字符串为空
    else
    {
        if(input_num0.isEmpty() == false)
        {
            QRegExp rx;
            rx.setPattern("(\\.){0,1}0+$");

            bool ok;
            QString input_num = QString("%1").arg(input_num0.toDouble(&ok),0,'f',-1).replace(rx,"");
            QString input_inf = input_num+QString(ch);
            ui->label_show_exp->setText(ori_exp+input_inf);
        }

        ui->lineEdit->clear();
       ui->lineEdit->setFocus ();
    }
}


/*
 * 清空整个面板
*/
void Widget::on_clearButton_clicked(){
    ui->label_show_exp->clear();
    ui->lineEdit->clear();
    flag = 0;
}


/*
 * 清空输入板
*/
void Widget::on_ceButton_clicked(){
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
}


/*
 * 判断是否是运算符:即+ - * / (
*/
bool IsOpe(QChar c){
  if(c == '+' || c == '-' || c == '*' || c == '/')
     return true ;
   else if(c == '(')
      return true;
  else
      return false;
}

/*
 * 左括号操作符处理
*/
void Widget::on_leftbrackButton_clicked(){
    QString ori_exp = ui->label_show_exp->text();
    if(ori_exp.isEmpty()){
        ui->label_show_exp->setText(QString('('));
        ++flag;
    } else {
        QChar last_ch = ori_exp[ori_exp.size()-1];
        if( IsOpe(last_ch) ){   //如果上一个字符是运算符或者同样是左括号的话，才可以继续输入左括号
            ui->label_show_exp->setText(ori_exp+QString('('));
            ++flag;
        }
    }
}

/*
 * 右括号处理
*/
void Widget::on_rightbrackButton_clicked(){
    if(flag > 0){
      QString ori_exp = ui->label_show_exp->text();
      QString temp_data = ui->lineEdit->text();
      ori_exp = ori_exp+temp_data;
      if(ori_exp.isEmpty() == false){
          QChar last_ch = ori_exp[ori_exp.size()-1];
          if(last_ch.isDigit() || last_ch == ')'){
              //只有上一个字符是数字或者也是右括号，才可以继续提交右括号
              ui->label_show_exp->setText(ori_exp+QString(')'));
              --flag;
               ui->lineEdit->clear();
               ui->lineEdit->setFocus();
        }
      }
  }
}


/*
 * backspace 按键操作
*/
void Widget::on_backspaceButton_clicked(){
    QString ori_str = ui->lineEdit->text();

    QString bac_str = ori_str.mid(0,ori_str.size()-1);

    if(bac_str.isEmpty() == true)
        ui->lineEdit->setText(QString("0"));
    else
       ui->lineEdit->setText(bac_str);
}


/*
 * 获取操作符的优先级
 *
*/
int Widget::GetPriOfOpe(QChar ch, int flag)
{
    if(ch == '#')
        return 0;
    else if(ch == '+' || ch == '-')
        return 2;
    else if(ch == '*' || ch == '/')
        return 3;
    else if(ch == '(')
    {
        if(flag == 0)
            return 1;      //出栈为最小优先级
        else
            return 4;       //入栈为最大优先级
    }
    else if(ch == ')')
    {
        if(flag == 0)
            return 4;
        else
            return 1;   //入栈为最小优先级
    }

   return -1;
}


/*
 * 根据字符串计算数值
*/
double Widget::CalFromStr(QString exp_str,bool &ok)
{
    QString pos_exp[MAXSIZE];
    int num = GetPostExp(exp_str,pos_exp);

    double nums[num];
    int nums_top = 0;
    ok = true;      //运算成功
    for(int i = 0;i<num;++i)
    {
        QString temp = pos_exp[i];

        if(temp[0].isDigit() == true)       //数字
        {
            nums[nums_top++] = temp.toDouble();
        }
        else
        {
            //出栈两个运算数
            double sec_num = nums[--nums_top];
            double fir_num = nums[--nums_top];
            double ans = 0;
            if(temp[0] == '+')
            {
                ans = fir_num + sec_num;
            }
            else if(temp[0] == '-')
            {
                  ans = fir_num - sec_num;
            }
            else if(temp[0] == '*')
              {
                 ans = fir_num * sec_num;
            }
            else
            {
                if(sec_num == 0)
                {
                     ok = false;
                     return -1;     //运算失败
                }
                else
                    ans = fir_num/sec_num;
            }

             nums[nums_top++] = ans;     //计算后结果入栈
        }
    }

    return nums[0];

}


/*
 * 获取后缀表达式
*/
int Widget::GetPostExp(QString exp_str,QString pos_exp[]){

    int pos_exp_top = 0;

    QChar opes_temp[MAXSIZE];       //存放临时符号栈
    int opes_temp_top = 0;
    opes_temp[opes_temp_top++] = QChar('#');

    int length = exp_str.size();

    for(int i = 0;i<length;++i){
        if(exp_str[i].isDigit()){    //提取数字串
            int beg = i;
            while(i<length){
                if(exp_str[i].isDigit() || exp_str[i] == '.')
                    ++i;
                else
                    break;
            }
            pos_exp[pos_exp_top++] = exp_str.mid(beg,i-beg);

            i = i-1;

        }
        else{       //提取运算符串
            int pri_i = GetPriOfOpe(exp_str[i],1);      //入栈优先级

            while(opes_temp_top >= 0){
                QChar ch_top = opes_temp[opes_temp_top-1];
                int pri_j = GetPriOfOpe(ch_top,0);      //出栈优先级

                if(pri_j >= pri_i){
                     --opes_temp_top;        //栈递减

                    if(ch_top != '(')
                        pos_exp[pos_exp_top++] = QString(ch_top);       //入后缀表达式
                    else
                         break;      //右括号匹配到左括号，退出
                }
                else
                    break;
            }
            if(exp_str[i] != ')')
                opes_temp[opes_temp_top++] = exp_str[i];        //入暂时栈
       }

     }

    //将剩余的栈中元素装入后缀表达式
    for(int i = opes_temp_top-1;i>0;--i)
         pos_exp[pos_exp_top++] = QString(opes_temp[i]);
    return pos_exp_top;
}

/*
 * 判断表达式是否输入成功:因为大多数判断都在输入的时候加以限制
 * 这里只判断输入不完整如（3+）、或者括号不匹配
*/
bool Widget::IsExpRig(QString exp){
    if(flag != 0)
        return false;
    else{
        if(exp.isEmpty() == true)
            return  true;
        else{
            int length = exp.size();
            if(exp[length-1].isDigit() == false && (exp[length - 1] != ')'))
                return false;
            else
                return true;
        }

    }
}


/*
 * 按下等号进行的操作:这里主要是判断表达式是否输入成功，若输入成功则调用上面的函数进行计算
*/
void Widget::on_equalButton_clicked(){
    QString label_str = ui->label_show_exp->text();
    QString line_str = ui->lineEdit->text();

    ui->label_show_exp->setText(label_str+line_str);

    QString exp_str = label_str+line_str;

    if(exp_str.isEmpty() == false){
        if(IsExpRig(exp_str) == false)
            ui->lineEdit->setText("输入错误!");

        else{
            bool ok;
             double ans = CalFromStr(exp_str,ok);

             if(ok == true)
                 ui->lineEdit->setText(QString::number(ans));
             else
                 ui->lineEdit->setText("除数不能为0!");
        }
    }

    flag = 0;       //flag标志归零
}










