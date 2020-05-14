/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *numerator1;
    QTextEdit *denominator1;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *numerator2;
    QTextEdit *denominator2;
    QTextEdit *res_denominator;
    QTextEdit *res_numerator;
    QLabel *label_5;
    QPushButton *plus;
    QPushButton *cut_first;
    QPushButton *divide;
    QPushButton *multiply;
    QPushButton *minus;
    QPushButton *cut_second;
    QPushButton *turn_first;
    QPushButton *turn_second;
    QPushButton *display_first;
    QPushButton *display_second;
    QPushButton *clear;
    QPushButton *display_result;
    QLabel *label_3;
    QTextEdit *enter_field;
    QPushButton *set_1;
    QPushButton *set_2;
    QPushButton *set_3;
    QPushButton *set_4;
    QLabel *label_6;
    QTextEdit *display;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(554, 509);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        numerator1 = new QTextEdit(centralwidget);
        numerator1->setObjectName(QString::fromUtf8("numerator1"));
        numerator1->setGeometry(QRect(30, 20, 104, 31));
        numerator1->setReadOnly(false);
        denominator1 = new QTextEdit(centralwidget);
        denominator1->setObjectName(QString::fromUtf8("denominator1"));
        denominator1->setGeometry(QRect(30, 60, 104, 31));
        denominator1->setReadOnly(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 101, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 40, 101, 17));
        numerator2 = new QTextEdit(centralwidget);
        numerator2->setObjectName(QString::fromUtf8("numerator2"));
        numerator2->setGeometry(QRect(160, 20, 104, 31));
        numerator2->setReadOnly(false);
        denominator2 = new QTextEdit(centralwidget);
        denominator2->setObjectName(QString::fromUtf8("denominator2"));
        denominator2->setGeometry(QRect(160, 60, 104, 31));
        denominator2->setReadOnly(false);
        res_denominator = new QTextEdit(centralwidget);
        res_denominator->setObjectName(QString::fromUtf8("res_denominator"));
        res_denominator->setGeometry(QRect(400, 60, 104, 31));
        res_denominator->setReadOnly(true);
        res_numerator = new QTextEdit(centralwidget);
        res_numerator->setObjectName(QString::fromUtf8("res_numerator"));
        res_numerator->setGeometry(QRect(400, 20, 104, 31));
        res_numerator->setReadOnly(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 40, 101, 17));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(30, 120, 71, 51));
        cut_first = new QPushButton(centralwidget);
        cut_first->setObjectName(QString::fromUtf8("cut_first"));
        cut_first->setGeometry(QRect(350, 120, 71, 51));
        divide = new QPushButton(centralwidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(270, 120, 71, 51));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        multiply->setGeometry(QRect(190, 120, 71, 51));
        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(110, 120, 71, 51));
        cut_second = new QPushButton(centralwidget);
        cut_second->setObjectName(QString::fromUtf8("cut_second"));
        cut_second->setGeometry(QRect(430, 120, 91, 51));
        turn_first = new QPushButton(centralwidget);
        turn_first->setObjectName(QString::fromUtf8("turn_first"));
        turn_first->setGeometry(QRect(30, 180, 91, 51));
        turn_second = new QPushButton(centralwidget);
        turn_second->setObjectName(QString::fromUtf8("turn_second"));
        turn_second->setGeometry(QRect(130, 180, 111, 51));
        display_first = new QPushButton(centralwidget);
        display_first->setObjectName(QString::fromUtf8("display_first"));
        display_first->setGeometry(QRect(250, 180, 121, 51));
        display_second = new QPushButton(centralwidget);
        display_second->setObjectName(QString::fromUtf8("display_second"));
        display_second->setGeometry(QRect(380, 180, 141, 51));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(440, 430, 81, 31));
        display_result = new QPushButton(centralwidget);
        display_result->setObjectName(QString::fromUtf8("display_result"));
        display_result->setGeometry(QRect(30, 240, 141, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 240, 67, 17));
        enter_field = new QTextEdit(centralwidget);
        enter_field->setObjectName(QString::fromUtf8("enter_field"));
        enter_field->setGeometry(QRect(30, 340, 141, 71));
        set_1 = new QPushButton(centralwidget);
        set_1->setObjectName(QString::fromUtf8("set_1"));
        set_1->setGeometry(QRect(200, 340, 101, 31));
        set_2 = new QPushButton(centralwidget);
        set_2->setObjectName(QString::fromUtf8("set_2"));
        set_2->setGeometry(QRect(200, 380, 101, 31));
        set_3 = new QPushButton(centralwidget);
        set_3->setObjectName(QString::fromUtf8("set_3"));
        set_3->setGeometry(QRect(320, 340, 101, 31));
        set_4 = new QPushButton(centralwidget);
        set_4->setObjectName(QString::fromUtf8("set_4"));
        set_4->setGeometry(QRect(320, 380, 101, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 320, 67, 17));
        display = new QTextEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(380, 260, 141, 31));
        display->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 20, 51, 17));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 0, 101, 17));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(160, 0, 111, 17));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 100, 261, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 554, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "________________", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "________________", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "________________", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        cut_first->setText(QCoreApplication::translate("MainWindow", "Cut first", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "Divide", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "Multiply", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "Subtract", nullptr));
        cut_second->setText(QCoreApplication::translate("MainWindow", "Cut second", nullptr));
        turn_first->setText(QCoreApplication::translate("MainWindow", "Turn first", nullptr));
        turn_second->setText(QCoreApplication::translate("MainWindow", "Turn second", nullptr));
        display_first->setText(QCoreApplication::translate("MainWindow", "First to decimal", nullptr));
        display_second->setText(QCoreApplication::translate("MainWindow", "Second to decimal", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear all", nullptr));
        display_result->setText(QCoreApplication::translate("MainWindow", "Result to decimal", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "output:   ", nullptr));
        set_1->setText(QCoreApplication::translate("MainWindow", "set 1st field", nullptr));
        set_2->setText(QCoreApplication::translate("MainWindow", "set 2d field", nullptr));
        set_3->setText(QCoreApplication::translate("MainWindow", "set 3d field", nullptr));
        set_4->setText(QCoreApplication::translate("MainWindow", "set 4th field", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "enter:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "result:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "first fraction:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "second fraction:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "choose what's to be done to them:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
