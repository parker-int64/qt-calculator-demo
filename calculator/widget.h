#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();



private:
    Ui::Widget *ui;
    int flag; //左右括号个数标记

private slots:
    // 数字按钮
    void on_numButton_1_clicked();
    void on_numButton_2_clicked();
    void on_numButton_3_clicked();
    void on_numButton_4_clicked();
    void on_numButton_5_clicked();
    void on_numButton_6_clicked();
    void on_numButton_7_clicked();
    void on_numButton_8_clicked();
    void on_numButton_9_clicked();
    void on_numButton_0_clicked();

    void on_dotButton_clicked();   // "."按钮


    void RecOpe(QChar ch);                                 // 接受按下运算符信号

    void RecNum(int num);                                  // 接受按下数字信号


    int GetPriOfOpe(QChar ch,int flag);                    //获得运算符号的优先级

    double CalFromStr(QString exp, bool &ok);              //由表达式计算值

    int GetPostExp(QString exp_str,QString pos_exp[] );    //获取后缀表达式



    bool IsExpRig(QString exp);     //判断输入的表达式是否正确

    // 操作符号按钮

    void on_plusButton_clicked();
    void on_minusButton_clicked();
    void on_multiButton_clicked();
    void on_divButton_clicked();
    void on_clearButton_clicked();
    void on_ceButton_clicked();
    void on_leftbrackButton_clicked();
    void on_rightbrackButton_clicked();
    void on_backspaceButton_clicked();
    void on_equalButton_clicked();

signals:
    void SendOpe(QChar ch);    //发送输入操作符信号
    void SendNum(int num);     //发送输入数字信号

};
#endif // WIDGET_H
