#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setValue(QTextEdit *field, QString val)
{
    field->setText(val);
}

void MainWindow::on_clear_clicked()
{
    ui->numerator1->clear();
    ui->numerator2->clear();
    ui->denominator1->clear();
    ui->denominator2->clear();
    ui->res_numerator->clear();
    ui->res_denominator->clear();
    ui->display->clear();
    ui->enter_field->clear();
}

int find_gcd(int a, int b){
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else if (a == b)
        return a;
    else if (a > b)
        return find_gcd(a - b, b);
    else
        return find_gcd(a, b - a);
}

void MainWindow::on_plus_clicked()
{
    if(!(check_denom(ui->denominator1)) || !(check_denom(ui->denominator2))){
        return;
    }

    int num = ui->numerator1->toPlainText().toInt() * ui->denominator2->toPlainText().toInt() + ui->numerator2->toPlainText().toInt() *ui->denominator1->toPlainText().toInt();
    int den = ui->denominator1->toPlainText().toInt() * ui->denominator2->toPlainText().toInt();

    QString numer = QString::number(num);
    QString denom = QString::number(den);

    // cut result
    int gcd = find_gcd(num, den);
    QString a = QString::number(num / gcd);
    QString b = QString::number(den / gcd);

    // displaying result
    setValue(ui->res_numerator, a);
    setValue(ui->res_denominator, b);
}

void MainWindow::on_minus_clicked()
{
    if(!(check_denom(ui->denominator1)) || !(check_denom(ui->denominator2))){
        return;
    }

    int num = ui->numerator1->toPlainText().toInt() * ui->denominator2->toPlainText().toInt() - ui->numerator2->toPlainText().toInt() * ui->denominator1->toPlainText().toInt();
    int den = ui->denominator1->toPlainText().toInt() * ui->denominator2->toPlainText().toInt();


    // cut result
    int gcd = find_gcd(num, den);
    QString a = QString::number(num / gcd);
    QString b = QString::number(den / gcd);

    // displaying result
    setValue(ui->res_numerator, a);
    setValue(ui->res_denominator, b);
}

void MainWindow::on_multiply_clicked()
{
    if(!(check_denom(ui->denominator1)) || !(check_denom(ui->denominator2))){
        return;
    }

    int num = ui->numerator1->toPlainText().toInt() * ui->numerator2->toPlainText().toInt();
    int den = ui->denominator1->toPlainText().toInt() * ui->denominator2->toPlainText().toInt();

    // cut result
    int gcd = find_gcd(num, den);
    QString a = QString::number(num / gcd);
    QString b = QString::number(den / gcd);

    // displaying result
    setValue(ui->res_numerator, a);
    setValue(ui->res_denominator, b);
}

void MainWindow::on_divide_clicked()
{
    if(!(check_denom(ui->denominator1)) || !(check_denom(ui->denominator2))){
        return;
    }

    int num = ui->numerator1->toPlainText().toInt() * ui->denominator2->toPlainText().toInt();
    int den = ui->denominator1->toPlainText().toInt() * ui->numerator2->toPlainText().toInt();

    // cut result
    int gcd = find_gcd(num, den);
    QString a = QString::number(num / gcd);
    QString b = QString::number(den / gcd);

    // displaying result
    setValue(ui->res_numerator, a);
    setValue(ui->res_denominator, b);
}

void MainWindow::on_cut_first_clicked()
{
    if(!(check_denom(ui->denominator1))){
        return;
    }

    int gcd = find_gcd(ui->numerator1->toPlainText().toInt(),
                       ui->denominator1->toPlainText().toInt());
    QString a = QString::number(ui->numerator1->toPlainText().toInt() / gcd);
    QString b = QString::number(ui->denominator1->toPlainText().toInt() / gcd);

    ui->numerator1->setText(a);
    ui->denominator1->setText(b);
}

void MainWindow::on_cut_second_clicked()
{
    if(!(check_denom(ui->denominator2))){
        return;
    }

    int gcd = find_gcd(ui->numerator2->toPlainText().toInt(),
                       ui->denominator2->toPlainText().toInt());
    QString a = QString::number(ui->numerator2->toPlainText().toInt() / gcd);
    QString b = QString::number(ui->denominator2->toPlainText().toInt() / gcd);

    ui->numerator2->setText(a);
    ui->denominator2->setText(b);
}

void MainWindow::on_display_first_clicked()
{
    QString str = QString::number(ui->numerator1->toPlainText().toFloat() /
                                  ui->denominator1->toPlainText().toFloat());
    ui->display->setText(str);}

void MainWindow::on_display_second_clicked()
{
    QString str = QString::number(ui->numerator2->toPlainText().toFloat() /
                                  ui->denominator2->toPlainText().toFloat());
    ui->display->setText(str);
}

void MainWindow::on_display_result_clicked()
{
    QString str = QString::number(ui->res_numerator->toPlainText().toFloat() /
                                  ui->res_denominator->toPlainText().toFloat());
    ui->display->setText(str);
}

void MainWindow::on_turn_first_clicked()
{
    QString tmp = QString::number(ui->numerator1->toPlainText().toInt());
    ui->numerator1->setText(ui->denominator1->toPlainText());
    ui->denominator1->setText(tmp);
}

void MainWindow::on_turn_second_clicked()
{
    QString tmp = QString::number(ui->numerator2->toPlainText().toInt());
    ui->numerator2->setText(ui->denominator2->toPlainText());
    ui->denominator2->setText(tmp);
}

bool MainWindow::check_denom(QTextEdit* denom){
    if(denom->toPlainText().toInt() == 0){
        QMessageBox* box = new QMessageBox(this);
        box->setText("Error. You're trying to divide by zero.");
        box->exec();
        return false;
    } else{
        return true;
    }
}

void MainWindow::on_set_1_clicked()
{
    ui->numerator1->setText(ui->enter_field->toPlainText());
}

void MainWindow::on_set_2_clicked()
{
    ui->denominator1->setText(ui->enter_field->toPlainText());
}

void MainWindow::on_set_3_clicked()
{
    ui->numerator2->setText(ui->enter_field->toPlainText());
}

void MainWindow::on_set_4_clicked()
{
    ui->denominator2->setText(ui->enter_field->toPlainText());
}
