#ifndef CALCULATORMAIN_H
#define CALCULATORMAIN_H

#include <QMainWindow>
#include <stack>

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
    std::stack<number_data> number_storage;

    _num create_number(std::string equation, math_op func);

    void calculate(std::string num);

public slots:
    void button_pressed(QString button_command);
};

#endif // CALCULATORMAIN_H
