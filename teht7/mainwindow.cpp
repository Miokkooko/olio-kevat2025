#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->nappi,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->reset,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);
    connect(ui->nappi2,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->nappi3,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->nappi4,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->nappi5,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->nappi6,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->nappi7,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->nappi8,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->nappi9,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->nappi10,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->plus,&QPushButton::clicked,this,&MainWindow::operandHandler);
    connect(ui->miinus,&QPushButton::clicked,this,&MainWindow::operandHandler);
    connect(ui->tulo,&QPushButton::clicked,this,&MainWindow::operandHandler);
    connect(ui->jako,&QPushButton::clicked,this,&MainWindow::operandHandler);
     connect(ui->enter,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name:"<<name;
    if(name=="nappi"&&state==1)
    {
        number1+="1";
    }else if(name=="nappi"&&state==2)number2+="1";
    if(name=="nappi2"&&state==1)
    {
        number1+="2";
    }else if(name=="nappi2"&&state==2)number2+="2";

    if(name=="nappi3"&&state==1)
    {
        number1+="3";
    }else if(name=="nappi3"&&state==2)number2+="3";
    if(name=="nappi4"&&state==1)
    {
        number1+="4";
    }else if(name=="nappi4"&&state==2)number2+="4";
    if(name=="nappi5"&&state==1)
    {
        number1+="5";
    }else if(name=="nappi5"&&state==2)number2+="5";
    if(name=="nappi6"&&state==1)
    {
        number1+="6";
    }else if(name=="nappi6"&&state==2)number2+="6";
    if(name=="nappi7"&&state==1)
    {
        number1+="7";
    }else if(name=="nappi7"&&state==2)number2+="7";
    if(name=="nappi8"&&state==1)
    {
        number1+="8";
    }else if(name=="nappi8"&&state==2)number2+="8";
    if(name=="nappi9"&&state==1)
    {
        number1+="9";
    }else if(name=="nappi9"&&state==2)number2+="9";
    if(name=="nappi10"&&state==1)
    {
        number1+="0";
    }else if(name=="nappi10"&&state==2)number2+="0";
    ui->laatikko->setText(number1);
    ui->laatikko2->setText(number2);

}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name:"<<name;

    if(name=="reset")
    {
    number1="";
    number2="";
    ui->laatikko->setText(number1);
    ui->laatikko2->setText(number2);
    state=1;
    result=0;
    ui->tulos->setText("");
    }

    if(name=="enter")
    {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        if(operand=='+')
        {
            result=n1+n2;
            ui->tulos->setText(QString::number(result));
        }
        if(operand=='-')
        {
            result=n1-n2;
            ui->tulos->setText(QString::number(result));
        }
        if(operand=='*')
        {
            result=n1*n2;
            ui->tulos->setText(QString::number(result));
        }
        if(operand=='/')
        {
            result=n1/n2;
            ui->tulos->setText(QString::number(result));
        }
    }
}

void MainWindow::operandHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name:"<<name;
    if(name=="plus")
    {
    operand='+';
    }
    if(name=="miinus")
    {
        operand='-';
    }
    if(name=="tulo")
    {
        operand='*';
    }
    if(name=="jako")
    {
        operand='/';
    }
    state=2;
}

