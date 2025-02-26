#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->status->setText("Select playtime and press start game!");

    pQTimer = new QTimer(this);

    connect(ui->aika1,&QPushButton::clicked,this,&MainWindow::SetGameInfo);
    connect(ui->aika2,&QPushButton::clicked,this,&MainWindow::SetGameInfo);
    connect(ui->start,&QPushButton::clicked,this,&MainWindow::SetGameInfo);
    connect(pQTimer,&QTimer::timeout,this,&MainWindow::timeout);
    connect(ui->switch1,&QPushButton::clicked,this,&MainWindow::SetGameInfo);
    connect(ui->switch2,&QPushButton::clicked,this,&MainWindow::SetGameInfo);
    connect(ui->stop,&QPushButton::clicked,this,&MainWindow::gameOver);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if(currentPlayer==1)
    {
    player1Time-=1;
    ui->progress1->setValue(player1Time);
    }
    if(currentPlayer==2)
    {
        player2Time-=1;
        ui->progress2->setValue(player2Time);
    }

    if(player1Time==0)
    {
        ui->status->setText("Player 2 won!");
        pQTimer->stop();
    }
    if(player2Time==0)
    {
        ui->status->setText("Player 1 won!");
        pQTimer->stop();
    }
}

void MainWindow::gameOver()
{
    pQTimer->stop();
    ui->progress1->setValue(ui->progress1->maximum());
    ui->progress2->setValue(ui->progress2->maximum());
    ui->status->setText("New game via start button");
}

void MainWindow::SetGameInfo()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name=="aika1")
    {
        gameTime=120;
        player1Time=120;
        player2Time=120;
        ui->progress1->setMaximum(player1Time);
        ui->progress2->setMaximum(player2Time);
        ui->progress1->setValue(player1Time);
        ui->progress2->setValue(player2Time);

        ui->status->setText("Ready to play!");
    }
    if(name=="aika2")
    {
        gameTime=300;
        player1Time=300;
        player2Time=300;
        ui->progress1->setMaximum(player1Time);
        ui->progress2->setMaximum(player2Time);
        ui->progress1->setValue(player1Time);
        ui->progress2->setValue(player2Time);
        ui->status->setText("Ready to play!");
    }
    if(name=="start")
    {
        ui->status->setText("Game ongoing");
        pQTimer->start(1000);

    }

    if(name=="switch1")
    {
        currentPlayer=1;
    }
    if(name=="switch2")
    {
        currentPlayer=2;
    }

}

