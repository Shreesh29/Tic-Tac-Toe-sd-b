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

public slots:

    void set1();
    void game_start();
    void start_turn();

signals:
    void set_turn();

private:
    Ui::MainWindow *ui;

    char game_board[3][3];

    char turn_system;




};
#endif // MAINWINDOW_H
