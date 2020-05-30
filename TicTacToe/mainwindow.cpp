#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Variable initializations

    // for game_board
    for( size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            game_board[i][j] = 'A';
        }
    }

    // for turn_system
    turn_system = 'A'; // default starting turn is set to A. On starting game, the turn is set to 'X'


    // my picture for X
     ui->label->setText("Test");
     ui->label_2->setPixmap(QPixmap(":/X.png"));
     ui->label_3->setPixmap(QPixmap(":/X.png"));
     ui->label_4->setPixmap(QPixmap(":/image.png"));
     ui->label_5->setPixmap(QPixmap(":/image.png"));
     ui->label_6->setPixmap(QPixmap(":/X.png"));
     ui->label_7->setPixmap(QPixmap(":/X.png"));
     ui->label_8->setPixmap(QPixmap(":/X.png"));
     ui->label_9->setPixmap(QPixmap(":/X.png"));


           //UI
           ui->label_20->setPixmap(QPixmap(":/X.png"));
           ui->label_21->setPixmap(QPixmap(":/image.png"));

           //CONNECTIONS:
           QObject::connect(ui->pushButton, SIGNAL(pressed()), this, SLOT(set1()) );
           QObject::connect(ui->start_game, SIGNAL(clicked()), this, SLOT(game_start()) );
           QObject::connect(this, SIGNAL(set_turn()), this, SLOT(start_turn()) );


}
// SLOT DEFINITIONS

void MainWindow::set1() {
   // ui->label_10->setText("ok");
    ui->label->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
}

void MainWindow::start_turn() {
    ui->turn->setText(QString(turn_system));
}
void MainWindow::game_start() {
    turn_system = 'X';
    emit set_turn();
    ui->start_game->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

