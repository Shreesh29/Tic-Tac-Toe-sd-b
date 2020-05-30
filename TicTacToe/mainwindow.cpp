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
            std::cout<< game_board[i][j] << std::endl; //testing
        }
    }

    // for no_win
    no_win.reserve(9); // set size to 9
    for ( size_t i = 0; i < 9; i++) {
         no_win[i] = false;
    }

    turn_system = 'A'; // default starting turn is set to A. On starting game, the turn is set to 'X'

     win = false;


     //UI
     ui->label_20->setPixmap(QPixmap(":/X.png"));
     ui->label_21->setPixmap(QPixmap(":/image.png"));

     // START GAME CONNECTION:
     QObject::connect(ui->start_game, SIGNAL(clicked()), this, SLOT(game_start()) );

     // SET TURN CONNECTION
     QObject::connect(this, SIGNAL(set_turn()), this, SLOT(start_turn()) );


     // BUTTON PRESS CONNECTIONS TO PLAY TURN:
     QObject::connect(ui->pushButton_2, SIGNAL(pressed()), this, SLOT(set1()) );
     QObject::connect(ui->pushButton_3, SIGNAL(pressed()), this, SLOT(set2()) );
     QObject::connect(ui->pushButton_4, SIGNAL(pressed()), this, SLOT(set3()) );
     QObject::connect(ui->pushButton_5, SIGNAL(pressed()), this, SLOT(set4()) );
     QObject::connect(ui->pushButton_6, SIGNAL(pressed()), this, SLOT(set5()) );
     QObject::connect(ui->pushButton_7, SIGNAL(pressed()), this, SLOT(set6()) );
     QObject::connect(ui->pushButton_8, SIGNAL(pressed()), this, SLOT(set7()) );
     QObject::connect(ui->pushButton_9, SIGNAL(pressed()), this, SLOT(set8()) );
     QObject::connect(ui->pushButton_10, SIGNAL(pressed()), this, SLOT(set9()) );

}


// SLOT DEFINITIONS

void MainWindow::start_turn() {
    ui->turn->setText(QString(turn_system));
}

void MainWindow::game_start() {
    turn_system = 'X';
    ui->label_10->setText("Choose a Number");
    emit set_turn();
    ui->start_game->hide();
}

bool MainWindow::winning_system() { // to check for any winner




}


// BUTTON SLOTS
void MainWindow::set1() {
   // ui->label_10->setText("ok");
    if ( turn_system == 'X') {
    ui->label->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[0][0] = 'X';
    no_win[0] = true;
    ui->pushButton_2->hide();
    }

    else if (turn_system == 'O') {
    ui->label->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[0][0] = 'O';
    no_win[0] = true;
    ui->pushButton_2->hide();
    }
}

void MainWindow::set2() {
    if ( turn_system == 'X') {
    ui->label_2->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[1][0] = 'X';
    no_win[1] = true;
    ui->pushButton_3->hide();
    }

    else if (turn_system == 'O') {
    ui->label_2->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[1][0] = 'O';
    no_win[1] = true;
    ui->pushButton_3->hide();
    }
}

void MainWindow::set3() {
    if ( turn_system == 'X') {
    ui->label_3->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[2][0] = 'X';
    no_win[2] = true;
    ui->pushButton_4->hide();
    }

    else if (turn_system == 'O') {
    ui->label_3->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[2][0] = 'O';
    no_win[2] = true;
    ui->pushButton_4->hide();
    }
}

void MainWindow::set4(){
    if ( turn_system == 'X') {
    ui->label_4->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[0][1] = 'X';
    no_win[3] = true;
    ui->pushButton_5->hide();
    }

    else if (turn_system == 'O') {
    ui->label_4->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[0][1] = 'O';
    no_win[3] = true;
    ui->pushButton_5->hide();
    }
}

void MainWindow::set5(){
    if ( turn_system == 'X') {
    ui->label_5->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[1][1] = 'X';
    no_win[4] = true;
    ui->pushButton_6->hide();
    }

    else if (turn_system == 'O') {
    ui->label_5->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[1][1] = 'O';
    no_win[4] = true;
    ui->pushButton_6->hide();
    }
}

void MainWindow::set6(){
    if ( turn_system == 'X') {
    ui->label_6->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[2][1] = 'X';
    no_win[5] = true;
    ui->pushButton_7->hide();
    }

    else if (turn_system == 'O') {
    ui->label_6->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[2][1] = 'O';
    no_win[5] = true;
    ui->pushButton_7->hide();
    }
}

void MainWindow::set7(){
    if ( turn_system == 'X') {
    ui->label_7->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[0][2] = 'X';
    no_win[6] = true;
    ui->pushButton_8->hide();
    }

    else if (turn_system == 'O') {
    ui->label_7->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[0][2] = 'O';
    no_win[6] = true;
    ui->pushButton_8->hide();
    }
}

void MainWindow::set8(){
    if ( turn_system == 'X') {
    ui->label_8->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[1][2] = 'X';
    no_win[7] = true;
    ui->pushButton_9->hide();
    }

    else if (turn_system == 'O') {
    ui->label_8->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[1][2] = 'O';
    no_win[7] = true;
    ui->pushButton_9->hide();
    }
}

void MainWindow::set9(){
    if ( turn_system == 'X') {
    ui->label_9->setPixmap(QPixmap(":/X.png"));
    turn_system = 'O';
    emit set_turn();
    //3
    game_board[2][2] = 'X';
    no_win[8] = true;
    ui->pushButton_10->hide();
    }

    else if (turn_system == 'O') {
    ui->label_9->setPixmap(QPixmap(":/image.png"));
    turn_system = 'X';
    emit set_turn();
    //3
    game_board[2][2] = 'O';
    no_win[8] = true;
    ui->pushButton_10->hide();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

