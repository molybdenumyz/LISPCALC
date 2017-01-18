#ifndef LISP_H
#define LISP_H

#include <QMainWindow>
#include<QString>
namespace Ui {
class LISP;
}

class LISP : public QMainWindow
{
    Q_OBJECT

public:
    explicit LISP(QWidget *parent = 0);
    ~LISP();
    QString problem;
    QString result;

private slots:
    void on_pushButton_clicked();

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_add_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_minus_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_mutiply_clicked();

    void on_mod_clicked();

    void on_left_clicked();

    void on_right_clicked();

    void on_equal_clicked();

    void on_clear_clicked();

    void on_del_clicked();

    void on_demo_clicked();

    void on_help_clicked();

    void on_minus_2_clicked();

    void on_num0_clicked();

    void on_point_clicked();

    void on_devide_clicked();

private:
    Ui::LISP *ui;
    QString input;
    QString output;
    void inputloop();

};

#endif // LISP_H
