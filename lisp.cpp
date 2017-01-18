#include "lisp.h"
#include "ui_lisp.h"
#include "calc.h"
LISP::LISP(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LISP)
{
    ui->setupUi(this);
}

LISP::~LISP()
{
    delete ui;
}

void LISP::inputloop()
{
    output=output+input;
    ui->inputline->setText(output);  //在界面上输出output的内容
    output = ui->inputline->text();//当前界面的output
}

void LISP::on_num1_clicked()
{

    input = "1";
    inputloop();
}

void LISP::on_num2_clicked()
{
     input ="2";
     inputloop();
}

void LISP::on_num3_clicked()
{
    input = "3";
    inputloop();
}

void LISP::on_add_clicked()
{
    input ="+";
    inputloop();
}

void LISP::on_num4_clicked()
{
    input ="4";
    inputloop();
}

void LISP::on_num5_clicked()
{
    input ="5";
    inputloop();
}

void LISP::on_num6_clicked()
{
    input = "6";
    inputloop();
}


void LISP::on_minus_clicked()
{
    input = "-";
    inputloop();
}

void LISP::on_num7_clicked()
{
    input ="7";
    inputloop();
}

void LISP::on_num8_clicked()
{
    input ="8";
    inputloop();
}

void LISP::on_num9_clicked()
{
    input ="9";
    inputloop();
}

void LISP::on_mutiply_clicked()
{
    input = "*";
    inputloop();
}

void LISP::on_mod_clicked()
{
    input ="%";
    inputloop();
}

void LISP::on_left_clicked()
{
    input = "(";
    inputloop();
}

void LISP::on_right_clicked()
{
    input = ")";
    inputloop();
}

void LISP::on_equal_clicked()
{
    input = "=";
    inputloop();
    result = Operating(output);
    ui->outputline->setText(result);
}


void LISP::on_clear_clicked()//当按下清除键时输入输出字符串设空
{
    output = "";
    input ="";
    ui->inputline->setText(input);
    ui->outputline->setText(output);
}

void LISP::on_del_clicked()//退格按钮
{
    output = output.left(output.length() - 1);//输入的字符并输出
    ui->inputline->setText(output);
}

void LISP::on_demo_clicked()
{
    ui->outputline->setText("by 2153618 yz");
}

void LISP::on_help_clicked()
{
    ui->outputline->setText("前缀表达式计算器 例 （+45）= 9");
}

void LISP::on_minus_2_clicked()
{
    input = "-";
    inputloop();
}

void LISP::on_num0_clicked()
{
    input = "0";
    inputloop();
}

void LISP::on_point_clicked()
{
    input = ".";
    inputloop();
}

void LISP::on_devide_clicked()
{
    input = "/";
    inputloop();
}

void LISP::on_pushButton_clicked()
{
    //
}
