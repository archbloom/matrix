#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    float f1,f2,f3,f4,f5,f6,f7,f8,f9;
    float s1,s2,s3,s4,s5,s6,s7,s8,s9;
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void getdata();

    void clearfield();
    
private slots:
    void on_close_clicked();

    void on_ADD_clicked();

    void on_SUBTRACT_clicked();

    void on_MULTIPLY_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
