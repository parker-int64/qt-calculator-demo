/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_show_exp;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *clearButton;
    QPushButton *numButton_5;
    QPushButton *numButton_0;
    QPushButton *numButton_7;
    QPushButton *backspaceButton;
    QPushButton *numButton_3;
    QPushButton *numButton_2;
    QPushButton *negPosButton;
    QPushButton *numButton_6;
    QPushButton *equalButton;
    QPushButton *dotButton;
    QPushButton *minusButton;
    QPushButton *plusButton;
    QPushButton *numButton_8;
    QPushButton *multiButton;
    QPushButton *numButton_4;
    QPushButton *divButton;
    QPushButton *numButton_1;
    QPushButton *numButton_9;
    QPushButton *ceButton;
    QPushButton *leftbrackButton;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(316, 372);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(230,230,230)"));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_show_exp = new QLabel(Widget);
        label_show_exp->setObjectName(QString::fromUtf8("label_show_exp"));
        label_show_exp->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));
        label_show_exp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_show_exp);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 18pt \"Microsoft YaHei UI\";\n"
"border: 4px solid #000000"));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        clearButton = new QPushButton(Widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy1);
        clearButton->setMaximumSize(QSize(78, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        clearButton->setFont(font);
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Consolas\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}\n"
""));

        gridLayout->addWidget(clearButton, 1, 0, 1, 1);

        numButton_5 = new QPushButton(Widget);
        numButton_5->setObjectName(QString::fromUtf8("numButton_5"));
        numButton_5->setMaximumSize(QSize(78, 50));
        numButton_5->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_5, 4, 1, 1, 1);

        numButton_0 = new QPushButton(Widget);
        numButton_0->setObjectName(QString::fromUtf8("numButton_0"));
        numButton_0->setMaximumSize(QSize(200, 50));
        numButton_0->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_0, 6, 0, 1, 2);

        numButton_7 = new QPushButton(Widget);
        numButton_7->setObjectName(QString::fromUtf8("numButton_7"));
        sizePolicy.setHeightForWidth(numButton_7->sizePolicy().hasHeightForWidth());
        numButton_7->setSizePolicy(sizePolicy);
        numButton_7->setMaximumSize(QSize(78, 50));
        numButton_7->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_7, 2, 0, 1, 1);

        backspaceButton = new QPushButton(Widget);
        backspaceButton->setObjectName(QString::fromUtf8("backspaceButton"));
        backspaceButton->setMaximumSize(QSize(78, 50));
        backspaceButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	image: url(:/uiButton/uiComponents/backspaceButton_unclicked.png);\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover {\n"
"	\n"
"	image: url(:/uiButton/uiComponents/backspaceButton_clicked.png);\n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(backspaceButton, 1, 3, 1, 1);

        numButton_3 = new QPushButton(Widget);
        numButton_3->setObjectName(QString::fromUtf8("numButton_3"));
        numButton_3->setMaximumSize(QSize(78, 50));
        numButton_3->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_3, 5, 2, 1, 1);

        numButton_2 = new QPushButton(Widget);
        numButton_2->setObjectName(QString::fromUtf8("numButton_2"));
        sizePolicy1.setHeightForWidth(numButton_2->sizePolicy().hasHeightForWidth());
        numButton_2->setSizePolicy(sizePolicy1);
        numButton_2->setMaximumSize(QSize(78, 50));
        numButton_2->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_2, 5, 1, 1, 1);

        negPosButton = new QPushButton(Widget);
        negPosButton->setObjectName(QString::fromUtf8("negPosButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(negPosButton->sizePolicy().hasHeightForWidth());
        negPosButton->setSizePolicy(sizePolicy2);
        negPosButton->setMaximumSize(QSize(78, 50));
        negPosButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0);\n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(negPosButton, 1, 1, 1, 1);

        numButton_6 = new QPushButton(Widget);
        numButton_6->setObjectName(QString::fromUtf8("numButton_6"));
        numButton_6->setMaximumSize(QSize(78, 50));
        numButton_6->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_6, 4, 2, 1, 1);

        equalButton = new QPushButton(Widget);
        equalButton->setObjectName(QString::fromUtf8("equalButton"));
        sizePolicy1.setHeightForWidth(equalButton->sizePolicy().hasHeightForWidth());
        equalButton->setSizePolicy(sizePolicy1);
        equalButton->setMaximumSize(QSize(78, 120));
        equalButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,212,138);\n"
"	color:rgb(0,0,0); \n"
"	image: url(:/uiButton/uiComponents/equalButton_unclicked.png);\n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(247,198,69); \n"
"	image: url(:/uiButton/uiComponents/equalButton_clicked.png);\n"
"}\n"
""));

        gridLayout->addWidget(equalButton, 6, 3, 1, 1);

        dotButton = new QPushButton(Widget);
        dotButton->setObjectName(QString::fromUtf8("dotButton"));
        dotButton->setMaximumSize(QSize(78, 50));
        dotButton->setAutoFillBackground(false);
        dotButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Consolas\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(dotButton, 6, 2, 1, 1);

        minusButton = new QPushButton(Widget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setMaximumSize(QSize(100, 50));
        minusButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	image: url(:/uiButton/uiComponents/minusButton_unclicked.png);\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	image: url(:/uiButton/uiComponents/minusButton_clicked.png);\n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(minusButton, 4, 3, 1, 1);

        plusButton = new QPushButton(Widget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        plusButton->setMaximumSize(QSize(78, 50));
        plusButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"	image: url(:/uiButton/uiComponents/plusButton_unclicked.png);\n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209);\n"
"	image: url(:/uiButton/uiComponents/plusButton_clicked.png);\n"
"}"));

        gridLayout->addWidget(plusButton, 5, 3, 1, 1);

        numButton_8 = new QPushButton(Widget);
        numButton_8->setObjectName(QString::fromUtf8("numButton_8"));
        numButton_8->setMaximumSize(QSize(78, 50));
        numButton_8->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_8, 2, 1, 1, 1);

        multiButton = new QPushButton(Widget);
        multiButton->setObjectName(QString::fromUtf8("multiButton"));
        multiButton->setMaximumSize(QSize(100, 50));
        multiButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	image: url(:/uiButton/uiComponents/multiButton_unclicked.png);\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	image: url(:/uiButton/uiComponents/multiButton_clicked.png);\n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(multiButton, 2, 3, 1, 1);

        numButton_4 = new QPushButton(Widget);
        numButton_4->setObjectName(QString::fromUtf8("numButton_4"));
        sizePolicy1.setHeightForWidth(numButton_4->sizePolicy().hasHeightForWidth());
        numButton_4->setSizePolicy(sizePolicy1);
        numButton_4->setMaximumSize(QSize(78, 50));
        numButton_4->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_4, 4, 0, 1, 1);

        divButton = new QPushButton(Widget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setMaximumSize(QSize(78, 50));
        divButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	image: url(:/uiButton/uiComponents/divButton_unclicked.png);\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	image: url(:/uiButton/uiComponents/divButton_clicked.png);\n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(divButton, 1, 2, 1, 1);

        numButton_1 = new QPushButton(Widget);
        numButton_1->setObjectName(QString::fromUtf8("numButton_1"));
        numButton_1->setMaximumSize(QSize(78, 50));
        numButton_1->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_1, 5, 0, 1, 1);

        numButton_9 = new QPushButton(Widget);
        numButton_9->setObjectName(QString::fromUtf8("numButton_9"));
        sizePolicy1.setHeightForWidth(numButton_9->sizePolicy().hasHeightForWidth());
        numButton_9->setSizePolicy(sizePolicy1);
        numButton_9->setMaximumSize(QSize(78, 50));
        numButton_9->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Microsoft YaHei UI\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(250,250,250);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}"));

        gridLayout->addWidget(numButton_9, 2, 2, 1, 1);

        ceButton = new QPushButton(Widget);
        ceButton->setObjectName(QString::fromUtf8("ceButton"));
        sizePolicy1.setHeightForWidth(ceButton->sizePolicy().hasHeightForWidth());
        ceButton->setSizePolicy(sizePolicy1);
        ceButton->setMaximumSize(QSize(78, 50));
        ceButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Consolas\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}\n"
""));

        gridLayout->addWidget(ceButton, 0, 0, 1, 1);

        leftbrackButton = new QPushButton(Widget);
        leftbrackButton->setObjectName(QString::fromUtf8("leftbrackButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leftbrackButton->sizePolicy().hasHeightForWidth());
        leftbrackButton->setSizePolicy(sizePolicy3);
        leftbrackButton->setMaximumSize(QSize(78, 50));
        leftbrackButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Consolas\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}\n"
""));

        gridLayout->addWidget(leftbrackButton, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(78, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	font: 18pt \"Consolas\";\n"
"	border-radius: 0px;\n"
"	background-color: rgb(240,240,240);\n"
"	color:rgb(0,0,0); \n"
"} \n"
"QPushButton:hover { \n"
"	background-color: rgb(209,209,209); \n"
"}\n"
""));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Form", nullptr));
        label_show_exp->setText(QString());
        clearButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
#if QT_CONFIG(shortcut)
        clearButton->setShortcut(QCoreApplication::translate("Widget", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
#if QT_CONFIG(shortcut)
        numButton_5->setShortcut(QCoreApplication::translate("Widget", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
#if QT_CONFIG(shortcut)
        numButton_0->setShortcut(QCoreApplication::translate("Widget", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
#if QT_CONFIG(shortcut)
        numButton_7->setShortcut(QCoreApplication::translate("Widget", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        backspaceButton->setText(QString());
#if QT_CONFIG(shortcut)
        backspaceButton->setShortcut(QCoreApplication::translate("Widget", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
#if QT_CONFIG(shortcut)
        numButton_3->setShortcut(QCoreApplication::translate("Widget", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
#if QT_CONFIG(shortcut)
        numButton_2->setShortcut(QCoreApplication::translate("Widget", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        negPosButton->setText(QCoreApplication::translate("Widget", "\302\261", nullptr));
        numButton_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
#if QT_CONFIG(shortcut)
        numButton_6->setShortcut(QCoreApplication::translate("Widget", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        equalButton->setText(QString());
#if QT_CONFIG(shortcut)
        equalButton->setShortcut(QCoreApplication::translate("Widget", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        dotButton->setText(QCoreApplication::translate("Widget", ".", nullptr));
#if QT_CONFIG(shortcut)
        dotButton->setShortcut(QCoreApplication::translate("Widget", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        minusButton->setText(QString());
#if QT_CONFIG(shortcut)
        minusButton->setShortcut(QCoreApplication::translate("Widget", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        plusButton->setText(QString());
#if QT_CONFIG(shortcut)
        plusButton->setShortcut(QCoreApplication::translate("Widget", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
#if QT_CONFIG(shortcut)
        numButton_8->setShortcut(QCoreApplication::translate("Widget", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        multiButton->setText(QString());
#if QT_CONFIG(shortcut)
        multiButton->setShortcut(QCoreApplication::translate("Widget", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
#if QT_CONFIG(shortcut)
        numButton_4->setShortcut(QCoreApplication::translate("Widget", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        divButton->setText(QString());
#if QT_CONFIG(shortcut)
        divButton->setShortcut(QCoreApplication::translate("Widget", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
#if QT_CONFIG(shortcut)
        numButton_1->setShortcut(QCoreApplication::translate("Widget", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        numButton_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
#if QT_CONFIG(shortcut)
        numButton_9->setShortcut(QCoreApplication::translate("Widget", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        ceButton->setText(QCoreApplication::translate("Widget", "CE", nullptr));
        leftbrackButton->setText(QCoreApplication::translate("Widget", "\357\274\210", nullptr));
#if QT_CONFIG(shortcut)
        leftbrackButton->setShortcut(QCoreApplication::translate("Widget", "(", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_3->setText(QCoreApplication::translate("Widget", "\357\274\211", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_3->setShortcut(QCoreApplication::translate("Widget", ")", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
