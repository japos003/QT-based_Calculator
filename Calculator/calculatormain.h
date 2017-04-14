#ifndef CALCULATORMAIN_H
#define CALCULATORMAIN_H

#include <QMainWindow>
#include <stack>
#include <queue>

namespace Ui {
class CalculatorMain;
enum math_op{
    ADD, SUB, MUL, DIV, MOD
};
struct _num;
}

typedef enum _math_op{
    ADD, SUB, MUL, DIV, MOD
} math_op;

typedef struct _num{
    std::string num;
    math_op operation;
} number_data;

class CalculatorMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorMain(QWidget *parent = 0);
    ~CalculatorMain();

private:
    Ui::CalculatorMain *ui;
    std::string equation;
    std::string display_result;
    std::stack<number_data> number_storage;

    std::string parse(std::string equation, char operation1, char operation2);
    std::string parse_mul_div(std::string equation);
    std::string parse_add_sub(std::string equation);

    int calculate(std::queue<int>, std::queue<char>);

public slots:
    void button_pressed(QString button_command);
};

#endif // CALCULATORMAIN_H
