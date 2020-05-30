#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<iostream>
#include<vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool winning_system();

public slots:

    void set1();
    void set2();
    void set3();
    void set4();
    void set5();
    void set6();
    void set7();
    void set8();
    void set9();
    void game_start();
    void start_turn();

signals:
    void set_turn();

private:
    Ui::MainWindow *ui;

    char game_board[3][3];

    char turn_system;

    std::vector<bool> no_win;

    bool win;



};
#endif // MAINWINDOW_H
