#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void setValue(QTextEdit* field, QString val);
    void on_plus_clicked();
    void on_clear_clicked();
    void on_minus_clicked();
    void on_multiply_clicked();
    void on_divide_clicked();
    void on_cut_first_clicked();
    void on_cut_second_clicked();
    void on_display_first_clicked();
    void on_display_second_clicked();
    void on_turn_first_clicked();
    void on_turn_second_clicked();
    bool check_denom(QTextEdit* denom);
    friend int find_gcd(int a, int b);

    void on_set_1_clicked();

    void on_set_2_clicked();

    void on_set_3_clicked();

    void on_set_4_clicked();

    void on_display_result_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
