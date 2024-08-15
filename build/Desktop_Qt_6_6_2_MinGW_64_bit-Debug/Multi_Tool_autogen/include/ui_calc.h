/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calc
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_add;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_4;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_9;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_1;
    QPushButton *pushButton_dot;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_7;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_0;
    QPushButton *goBack;

    void setupUi(QMainWindow *calc)
    {
        if (calc->objectName().isEmpty())
            calc->setObjectName("calc");
        calc->resize(500, 900);
        centralwidget = new QWidget(calc);
        centralwidget->setObjectName("centralwidget");
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 634, 125, 125));
        QFont font;
        font.setPointSize(18);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(125, 384, 125, 125));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(250, 259, 125, 125));
        pushButton_percent->setFont(font);
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(0, 259, 125, 125));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setFont(font);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(375, 634, 125, 125));
        pushButton_add->setFont(font);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_add->setCheckable(true);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(125, 509, 125, 125));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(250, 509, 125, 125));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(125, 634, 125, 125));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName("pushButton_multiply");
        pushButton_multiply->setGeometry(QRect(375, 384, 125, 125));
        pushButton_multiply->setFont(font);
        pushButton_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_multiply->setCheckable(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 509, 125, 125));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName("pushButton_equals");
        pushButton_equals->setGeometry(QRect(375, 759, 125, 125));
        pushButton_equals->setFont(font);
        pushButton_equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_equals->setCheckable(true);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(250, 384, 125, 125));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_subtract = new QPushButton(centralwidget);
        pushButton_subtract->setObjectName("pushButton_subtract");
        pushButton_subtract->setGeometry(QRect(375, 509, 125, 125));
        pushButton_subtract->setFont(font);
        pushButton_subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_subtract->setCheckable(true);
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(375, 259, 125, 125));
        pushButton_divide->setFont(font);
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_divide->setCheckable(true);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 634, 125, 125));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(250, 759, 125, 125));
        pushButton_dot->setFont(font);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(6, 0, 481, 171));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setMouseTracking(true);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(6, 174, 481, 81));
        lineEdit->setFont(font1);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 384, 125, 125));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_sign = new QPushButton(centralwidget);
        pushButton_sign->setObjectName("pushButton_sign");
        pushButton_sign->setGeometry(QRect(125, 259, 125, 125));
        pushButton_sign->setFont(font);
        pushButton_sign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(125, 759, 125, 125));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        goBack = new QPushButton(centralwidget);
        goBack->setObjectName("goBack");
        goBack->setGeometry(QRect(0, 759, 125, 125));
        goBack->setFont(font);
        goBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(215, 215, 215);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        calc->setCentralWidget(centralwidget);

        retranslateUi(calc);

        QMetaObject::connectSlotsByName(calc);
    } // setupUi

    void retranslateUi(QMainWindow *calc)
    {
        calc->setWindowTitle(QCoreApplication::translate("calc", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("calc", "3", nullptr));
        pushButton_8->setText(QCoreApplication::translate("calc", "8", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("calc", "%", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("calc", "C", nullptr));
        pushButton_add->setText(QCoreApplication::translate("calc", "+", nullptr));
        pushButton_5->setText(QCoreApplication::translate("calc", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("calc", "6", nullptr));
        pushButton_2->setText(QCoreApplication::translate("calc", "2", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("calc", "\303\227", nullptr));
        pushButton_4->setText(QCoreApplication::translate("calc", "4", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("calc", "=", nullptr));
        pushButton_9->setText(QCoreApplication::translate("calc", "9", nullptr));
        pushButton_subtract->setText(QCoreApplication::translate("calc", "-", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("calc", "\303\267", nullptr));
        pushButton_1->setText(QCoreApplication::translate("calc", "1", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("calc", ".", nullptr));
        label->setText(QCoreApplication::translate("calc", "0", nullptr));
        pushButton_7->setText(QCoreApplication::translate("calc", "7", nullptr));
        pushButton_sign->setText(QCoreApplication::translate("calc", "+/-", nullptr));
        pushButton_0->setText(QCoreApplication::translate("calc", "0", nullptr));
        goBack->setText(QCoreApplication::translate("calc", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calc: public Ui_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
