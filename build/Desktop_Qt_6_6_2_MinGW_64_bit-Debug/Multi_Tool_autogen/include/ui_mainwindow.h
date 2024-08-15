/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *navigator;
    QPushButton *startNoteTaker;
    QPushButton *startCalculator;
    QWidget *notetaker;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QPalette palette;
        centralwidget->setPalette(palette);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1200, 800));
        navigator = new QWidget();
        navigator->setObjectName("navigator");
        startNoteTaker = new QPushButton(navigator);
        startNoteTaker->setObjectName("startNoteTaker");
        startNoteTaker->setEnabled(true);
        startNoteTaker->setGeometry(QRect(30, 30, 200, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        font.setPointSize(25);
        startNoteTaker->setFont(font);
        startCalculator = new QPushButton(navigator);
        startCalculator->setObjectName("startCalculator");
        startCalculator->setEnabled(true);
        startCalculator->setGeometry(QRect(260, 30, 200, 100));
        startCalculator->setFont(font);
        stackedWidget->addWidget(navigator);
        notetaker = new QWidget();
        notetaker->setObjectName("notetaker");
        QPalette palette1;
        notetaker->setPalette(palette1);
        stackedWidget->addWidget(notetaker);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startNoteTaker->setText(QCoreApplication::translate("MainWindow", "NoteTaker", nullptr));
        startCalculator->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
