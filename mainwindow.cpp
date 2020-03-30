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

void MainWindow::on_plus_clicked()
{
    if(!(check_denom(ui->denominator1)) || !(check_denom(ui->denominator2))){
        return;
    }
    Fraction first(ui->numerator1->toPlainText().toInt(),
                   ui->denominator1->toPlainText().toInt()),
             second(ui->numerator2->toPlainText().toInt(),
                    ui->denominator2->toPlainText().toInt());
    Fraction res = first.add(second);
    display_fraction(res, 3);
}

void MainWindow::on_minus_clicked()
{
    if(!(check_denom(ui->denominator1)) || !(check_denom(ui->denominator2))){
        return;
    }
    Fraction first(ui->numerator1->toPlainText().toInt(),
                   ui->denominator1->toPlainText().toInt()),
             second(ui->numerator2->toPlainText().toInt(),
                    ui->denominator2->toPlainText().toInt());
    Fraction res = first.subtract(second);
    display_fraction(res, 3);
}

void MainWindow::on_multiply_clicked()
{
    if(!(check_denom(ui->denominator1)) || !(check_denom(ui->denominator2))){
        return;
    }
    Fraction first(ui->numerator1->toPlainText().toInt(),
                   ui->denominator1->toPlainText().toInt()),
             second(ui->numerator2->toPlainText().toInt(),
                    ui->denominator2->toPlainText().toInt());
    Fraction res = first.multiply(second);
    display_fraction(res, 3);
}

void MainWindow::on_divide_clicked()
{
    if(!(check_denom(ui->denominator1)) || !(check_denom(ui->denominator2))){
        return;
    }
    Fraction first(ui->numerator1->toPlainText().toInt(),
                   ui->denominator1->toPlainText().toInt()),
             second(ui->numerator2->toPlainText().toInt(),
                    ui->denominator2->toPlainText().toInt());
    Fraction res = first.divide(second);
    display_fraction(res, 3);
}

void MainWindow::on_cut_first_clicked()
{
    if(!(check_denom(ui->denominator1))){
        return;
    }
    Fraction fr(ui->numerator1->toPlainText().toInt(),
               ui->denominator1->toPlainText().toInt());
    fr.cut();
    display_fraction(fr, 1);
}

void MainWindow::on_cut_second_clicked()
{
    if(!(check_denom(ui->denominator2))){
        return;
    }
    Fraction fr(ui->numerator2->toPlainText().toInt(),
               ui->denominator2->toPlainText().toInt());
    fr.cut();
    display_fraction(fr, 2);
}

void MainWindow::on_display_first_clicked()
{
    if(!(check_denom(ui->denominator1))){
        return;
    }
    QString str = QString::number(ui->numerator1->toPlainText().toFloat() /
                                  ui->denominator1->toPlainText().toFloat());
    ui->display->setText(str);}

void MainWindow::on_display_second_clicked()
{
    if(!(check_denom(ui->denominator2))){
        return;
    }
    QString str = QString::number(ui->numerator2->toPlainText().toFloat() /
                                  ui->denominator2->toPlainText().toFloat());
    ui->display->setText(str);
}

void MainWindow::on_display_result_clicked()
{
    if(!(check_denom(ui->res_denominator))){
        return;
    }
    QString str = QString::number(ui->res_numerator->toPlainText().toFloat() /
                                  ui->res_denominator->toPlainText().toFloat());
    ui->display->setText(str);
}

void MainWindow::on_turn_first_clicked()
{
    Fraction fr(ui->numerator1->toPlainText().toInt(),
               ui->denominator1->toPlainText().toInt());
    fr.turn();
    display_fraction(fr, 1);
}

void MainWindow::on_turn_second_clicked()
{
    Fraction fr(ui->numerator2->toPlainText().toInt(),
               ui->denominator2->toPlainText().toInt());
    fr.turn();
    display_fraction(fr, 2);
}

bool MainWindow::check_denom(QTextEdit* denom){
    if(denom->toPlainText().toInt() == 0){
        QMessageBox* box = new QMessageBox(this);
        box->setText("Error. You're trying to divide by zero.");
        box->exec();
        return false;
    } else {
        return true;
    }
}

void MainWindow::display_fraction(Fraction fr, int field_num)
{
    QString num = QString::number(fr.getNum());
    QString den = QString::number(fr.getDen());
    if(field_num == 1){
        ui->numerator1->setText(num);
        ui->denominator1->setText(den);
    }
    else if (field_num == 2){
        ui->numerator2->setText(num);
        ui->denominator2->setText(den);
    }
    else {
        ui->res_numerator->setText(num);
        ui->res_denominator->setText(den);
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
