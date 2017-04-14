/********************************************************************************
** Form generated from reading UI file 'calculatormain.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORMAIN_H
#define UI_CALCULATORMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorMain
{
public:
    QWidget *centralWidget;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_0;
    QPushButton *button_add;
    QPushButton *button_sub;
    QPushButton *button_div;
    QPushButton *button_mul;
    QPushButton *button_mod;
    QPushButton *button_clear;
    QPushButton *button_enter;
    QLCDNumber *lcdNumber;
    QLabel *equation_display;
    QMenuBar *menuBar;
    QMenu *menuCalculator;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorMain)
    {
        if (CalculatorMain->objectName().isEmpty())
            CalculatorMain->setObjectName(QStringLiteral("CalculatorMain"));
        CalculatorMain->resize(400, 300);
        centralWidget = new QWidget(CalculatorMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button_1 = new QPushButton(centralWidget);
        button_1->setObjectName(QStringLiteral("button_1"));
        button_1->setGeometry(QRect(130, 90, 31, 23));
        button_2 = new QPushButton(centralWidget);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setGeometry(QRect(170, 90, 31, 23));
        button_3 = new QPushButton(centralWidget);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setGeometry(QRect(210, 90, 31, 23));
        button_4 = new QPushButton(centralWidget);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setGeometry(QRect(130, 120, 31, 23));
        button_5 = new QPushButton(centralWidget);
        button_5->setObjectName(QStringLiteral("button_5"));
        button_5->setGeometry(QRect(170, 120, 31, 23));
        button_6 = new QPushButton(centralWidget);
        button_6->setObjectName(QStringLiteral("button_6"));
        button_6->setGeometry(QRect(210, 120, 31, 23));
        button_7 = new QPushButton(centralWidget);
        button_7->setObjectName(QStringLiteral("button_7"));
        button_7->setGeometry(QRect(130, 150, 31, 23));
        button_8 = new QPushButton(centralWidget);
        button_8->setObjectName(QStringLiteral("button_8"));
        button_8->setGeometry(QRect(170, 150, 31, 23));
        button_9 = new QPushButton(centralWidget);
        button_9->setObjectName(QStringLiteral("button_9"));
        button_9->setGeometry(QRect(210, 150, 31, 23));
        button_0 = new QPushButton(centralWidget);
        button_0->setObjectName(QStringLiteral("button_0"));
        button_0->setGeometry(QRect(170, 180, 31, 23));
        button_add = new QPushButton(centralWidget);
        button_add->setObjectName(QStringLiteral("button_add"));
        button_add->setGeometry(QRect(280, 90, 31, 23));
        button_sub = new QPushButton(centralWidget);
        button_sub->setObjectName(QStringLiteral("button_sub"));
        button_sub->setGeometry(QRect(320, 90, 31, 23));
        button_div = new QPushButton(centralWidget);
        button_div->setObjectName(QStringLiteral("button_div"));
        button_div->setGeometry(QRect(280, 120, 31, 23));
        button_mul = new QPushButton(centralWidget);
        button_mul->setObjectName(QStringLiteral("button_mul"));
        button_mul->setGeometry(QRect(320, 120, 31, 23));
        button_mod = new QPushButton(centralWidget);
        button_mod->setObjectName(QStringLiteral("button_mod"));
        button_mod->setGeometry(QRect(300, 150, 31, 23));
        button_clear = new QPushButton(centralWidget);
        button_clear->setObjectName(QStringLiteral("button_clear"));
        button_clear->setGeometry(QRect(130, 210, 51, 23));
        button_enter = new QPushButton(centralWidget);
        button_enter->setObjectName(QStringLiteral("button_enter"));
        button_enter->setGeometry(QRect(190, 210, 51, 23));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(130, 30, 111, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setAutoFillBackground(false);
        equation_display = new QLabel(centralWidget);
        equation_display->setObjectName(QStringLiteral("equation_display"));
        equation_display->setGeometry(QRect(136, 60, 101, 20));
        equation_display->setAlignment(Qt::AlignCenter);
        CalculatorMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuCalculator = new QMenu(menuBar);
        menuCalculator->setObjectName(QStringLiteral("menuCalculator"));
        CalculatorMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorMain);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatorMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatorMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatorMain->setStatusBar(statusBar);

        menuBar->addAction(menuCalculator->menuAction());

        retranslateUi(CalculatorMain);

        QMetaObject::connectSlotsByName(CalculatorMain);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorMain)
    {
        CalculatorMain->setWindowTitle(QApplication::translate("CalculatorMain", "CalculatorMain", 0));
        button_1->setText(QApplication::translate("CalculatorMain", "1", 0));
        button_2->setText(QApplication::translate("CalculatorMain", "2", 0));
        button_3->setText(QApplication::translate("CalculatorMain", "3", 0));
        button_4->setText(QApplication::translate("CalculatorMain", "4", 0));
        button_5->setText(QApplication::translate("CalculatorMain", "5", 0));
        button_6->setText(QApplication::translate("CalculatorMain", "6", 0));
        button_7->setText(QApplication::translate("CalculatorMain", "7", 0));
        button_8->setText(QApplication::translate("CalculatorMain", "8", 0));
        button_9->setText(QApplication::translate("CalculatorMain", "9", 0));
        button_0->setText(QApplication::translate("CalculatorMain", "0", 0));
        button_add->setText(QApplication::translate("CalculatorMain", "+", 0));
        button_sub->setText(QApplication::translate("CalculatorMain", "-", 0));
        button_div->setText(QApplication::translate("CalculatorMain", "/", 0));
        button_mul->setText(QApplication::translate("CalculatorMain", "X", 0));
        button_mod->setText(QApplication::translate("CalculatorMain", "%", 0));
        button_clear->setText(QApplication::translate("CalculatorMain", "Clear", 0));
        button_enter->setText(QApplication::translate("CalculatorMain", "Enter", 0));
        equation_display->setText(QString());
        menuCalculator->setTitle(QApplication::translate("CalculatorMain", "Calculator", 0));
    } // retranslateUi

};

namespace Ui {
    class CalculatorMain: public Ui_CalculatorMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORMAIN_H
