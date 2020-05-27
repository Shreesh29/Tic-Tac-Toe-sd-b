#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // my picture for X
     ui->label->setText("Test");

     ui->label_2->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
      ui->label_3->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
       ui->label_4->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
        ui->label_5->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
         ui->label_6->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
          ui->label_7->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
           ui->label_8->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
           ui->label_9->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));

           QObject::connect(ui->radioButton, SIGNAL(pressed()), this, SLOT(set1()) );


}

void MainWindow::set1() {

    ui->label_10->setText("ok");
     ui->label->setPixmap(QPixmap("/Users/shreeshagarwal/Desktop/X.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

