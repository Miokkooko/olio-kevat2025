#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int num=-1;
    int num2=-1;

private slots:
    void handleClick();


private:
    Ui::MainWindow *ui;
    QString number1,number2;
    int state=1;
    float result;
    short operand;
    void clearAndEnterClickHandler();
    void operandHandler();
    void resetLineEdits();

};
#endif // MAINWINDOW_H
