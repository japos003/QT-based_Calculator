#include "calculatormain.h"
#include "ui_calculatormain.h"

#include <iostream>
#include <QSignalMapper>
#include <queue>
#include <map>

/*
 * Calculator
 *
 */

CalculatorMain::CalculatorMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorMain)
{
    ui->setupUi(this);
    equation = "";

    QSignalMapper *signalMapper = new QSignalMapper(this);

    QObject::connect(ui->button_0, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_1, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_2, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_3, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_4, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_5, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_6, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_7, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_8, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_9, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));

    QObject::connect(ui->button_add, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_sub, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_div, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_mul, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_mod, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_clear, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
    QObject::connect(ui->button_enter, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));

    signalMapper->setMapping(ui->button_0, "ZERO");
    signalMapper->setMapping(ui->button_1, "ONE");
    signalMapper->setMapping(ui->button_2, "TWO");
    signalMapper->setMapping(ui->button_3, "THREE");
    signalMapper->setMapping(ui->button_4, "FOUR");
    signalMapper->setMapping(ui->button_5, "FIVE");
    signalMapper->setMapping(ui->button_6, "SIX");
    signalMapper->setMapping(ui->button_7, "SEVEN");
    signalMapper->setMapping(ui->button_8, "EIGHT");
    signalMapper->setMapping(ui->button_9, "NINE");

    signalMapper->setMapping(ui->button_add, "ADD");
    signalMapper->setMapping(ui->button_sub, "SUB");
    signalMapper->setMapping(ui->button_div, "DIV");
    signalMapper->setMapping(ui->button_mul, "MUL");
    signalMapper->setMapping(ui->button_mod, "MOD");
    signalMapper->setMapping(ui->button_clear, "CLEAR");
    signalMapper->setMapping(ui->button_enter, "ENTER");


//    QObject::connect(ui->button_0, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.ZERO);));
//    QObject::connect(ui->button_1, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.ONE);));
//    QObject::connect(ui->button_2, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.TWO);));
//    QObject::connect(ui->button_3, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.THREE);));
//    QObject::connect(ui->button_4, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.FOUR);));
//    QObject::connect(ui->button_5, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.FIVE);));
//    QObject::connect(ui->button_6, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.SIX);));
//    QObject::connect(ui->button_7, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.SEVEN);));
//    QObject::connect(ui->button_8, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.EIGHT);));
//    QObject::connect(ui->button_9, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.NINE);));

//    QObject::connect(ui->button_add, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.ADD);));
//    QObject::connect(ui->button_sub, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.SUB);));
//    QObject::connect(ui->button_div, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.DIV);));
//    QObject::connect(ui->button_mul, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.MUL);));
//    QObject::connect(ui->button_mod, SIGNAL(clicked(bool)), this, SLOT(test(ButtonInput.MOD);));

      QObject::connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(button_pressed(QString)));
}

CalculatorMain::~CalculatorMain()
{
    delete ui;
}

void CalculatorMain::button_pressed(QString button_command){

    std::map< QString,int > list_of_commands;

    list_of_commands.insert(std::pair<QString, int>("ZERO", 0));
    list_of_commands.insert(std::pair<QString, int>("ONE", 1));
    list_of_commands.insert(std::pair<QString, int>("TWO", 2));
    list_of_commands.insert(std::pair<QString, int>("THREE", 3));
    list_of_commands.insert(std::pair<QString, int>("FOUR", 4));
    list_of_commands.insert(std::pair<QString, int>("FIVE", 5));
    list_of_commands.insert(std::pair<QString, int>("SIX", 6));
    list_of_commands.insert(std::pair<QString, int>("SEVEN", 7));
    list_of_commands.insert(std::pair<QString, int>("EIGHT", 8));
    list_of_commands.insert(std::pair<QString, int>("NINE", 9));

    list_of_commands.insert(std::pair<QString, int>("ADD", 10));
    list_of_commands.insert(std::pair<QString, int>("SUB", 11));
    list_of_commands.insert(std::pair<QString, int>("DIV", 12));
    list_of_commands.insert(std::pair<QString, int>("MUL", 13));
    list_of_commands.insert(std::pair<QString, int>("MOD", 14));
    list_of_commands.insert(std::pair<QString, int>("CLEAR", 15));
    list_of_commands.insert(std::pair<QString, int>("ENTER", 16));

    switch(list_of_commands[button_command]){
        case 0:
            std::cout << "button zero pressed" << std::endl;
            equation += "0";
        break;
        case 1:
            std::cout << "button one pressed" << std::endl;
            equation += "1";
            break;
        case 2:
            std::cout << "button two pressed" << std::endl;
            equation += "2";
            break;
        case 3:
            std::cout << "button three pressed" << std::endl;
            equation += "3";
            break;
        case 4:
            std::cout << "button four pressed" << std::endl;
            equation += "4";
            break;
        case 5:
            std::cout << "button five pressed" << std::endl;
            equation += "5";
            break;
        case 6:
            std::cout << "button six pressed" << std::endl;
            equation += "6";
            break;
        case 7:
            std::cout << "button seven pressed" << std::endl;
            equation += "7";
            break;
        case 8:
            std::cout << "button eight pressed" << std::endl;
            equation += "8";
            break;
        case 9:
            std::cout << "button nine pressed" << std::endl;
            equation += "9";
            break;

        //Functions
        case 10:
            std::cout << "button add pressed" << std::endl;
            equation += "+";
            break;
        case 11:
            equation += "-";
            break;
        case 12:
            std::cout << "button divide pressed" << std::endl;
            equation += "/";
            break;
        case 13:
            std::cout << "button multiply pressed" << std::endl;
            equation += "*";
            break;
        case 14:
            std::cout << "button modulo pressed" << std::endl;
            //number_storage.push(create_number(equation, MOD));
            break;
        case 15:
            std::cout << "button clear pressed" << std::endl;
            equation = "";
            break;
        case 16:
            std::cout << "button enter pressed" << std::endl;
            display_result = parse_mul_div(equation);
            display_result = parse_add_sub(display_result);
            ui->lcdNumber->display(atoi(display_result.c_str()));
            break;
    }

    std::cout << "equation: " << equation << std::endl;
    ui->equation_display->setText(QString::fromStdString(equation));
    //ui->num_screen->setText(QString::fromStdString(equation));
}

std::string CalculatorMain::parse(std::string equation, char operator1, char operator2) {
    std::queue<int> int_queue;
    std::queue<char> operation_queue;

    std::string num = "";

    std::string res = "";

    for (int ch = 0; ch < equation.size(); ch++) {
        std::cout << equation[ch] << std::endl;
        if (equation[ch] == '*' || equation[ch] == '/' || equation[ch] == '+' || equation[ch] == '-') {

            int_queue.push(atoi(num.c_str()));

            if (equation[ch] == operator1 || equation[ch] == operator2) {
                operation_queue.push(equation[ch]);
            }

            else {
                if (!operation_queue.empty()) {
                    res += std::to_string(calculate(int_queue, operation_queue));
                    while (!operation_queue.empty())
                        operation_queue.pop();
                    while (!int_queue.empty())
                        int_queue.pop();
                }
                else {
                    res += std::to_string(int_queue.front());
                    int_queue.pop();
                }


                res += equation[ch];
            }

            num.clear();
        }
        else {
            num += equation[ch];
            if (ch == equation.size() - 1)
                int_queue.push(atoi(num.c_str()));
        }

        std::cout << res << std::endl;
    }
    if (int_queue.size() == 1 && operation_queue.empty())
        res += std::to_string(int_queue.front());
    else if (!int_queue.empty() && !operation_queue.empty())
        res += std::to_string(calculate(int_queue, operation_queue));

    return res;
}

int CalculatorMain::calculate(std::queue<int> int_queue, std::queue<char> operation_queue) {

    int res = int_queue.front();
    int_queue.pop();

    while (!int_queue.empty() || !operation_queue.empty()) {
        if (operation_queue.front() == '*') {
            res *= int_queue.front();
        }
        else if (operation_queue.front() == '/')
            res /= int_queue.front();
        else if (operation_queue.front() == '+')
            res += int_queue.front();
        else if (operation_queue.front() == '-')
            res -= int_queue.front();

        int_queue.pop();
        operation_queue.pop();
    }

    if (!operation_queue.empty())
        operation_queue.pop();

    if (!int_queue.empty())
        int_queue.pop();
    return res;
}

std::string CalculatorMain::parse_mul_div(std::string equation) {
    return parse(equation, '*', '/');
}

std::string CalculatorMain::parse_add_sub(std::string equation) {

    return parse(equation, '+', '-');
}
