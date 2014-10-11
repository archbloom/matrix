#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getdata()
{
    f1=this->ui->lineEdit->text().toFloat();
    f2=this->ui->lineEdit_2->text().toFloat();
    f3=this->ui->lineEdit_3->text().toFloat();
    f4=this->ui->lineEdit_4->text().toFloat();
    f5=this->ui->lineEdit_5->text().toFloat();
    f6=this->ui->lineEdit_6->text().toFloat();
    f7=this->ui->lineEdit_7->text().toFloat();
    f8=this->ui->lineEdit_8->text().toFloat();
    f9=this->ui->lineEdit_9->text().toFloat();

    s1=this->ui->lineEdit_10->text().toFloat();
    s2=this->ui->lineEdit_11->text().toFloat();
    s3=this->ui->lineEdit_12->text().toFloat();
    s4=this->ui->lineEdit_13->text().toFloat();
    s5=this->ui->lineEdit_14->text().toFloat();
    s6=this->ui->lineEdit_15->text().toFloat();
    s7=this->ui->lineEdit_16->text().toFloat();
    s8=this->ui->lineEdit_17->text().toFloat();
    s9=this->ui->lineEdit_18->text().toFloat();
}

void MainWindow::clearfield()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
    ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();
    ui->lineEdit_11->clear();
    ui->lineEdit_12->clear();
    ui->lineEdit_13->clear();
    ui->lineEdit_14->clear();
    ui->lineEdit_15->clear();
    ui->lineEdit_16->clear();
    ui->lineEdit_17->clear();
    ui->lineEdit_18->clear();
}

void MainWindow::on_close_clicked()
{
    close();
}

void MainWindow::on_ADD_clicked()
{
    getdata();

    ui->lineEdit_19->setText(QString::number(f1+s1));
    ui->lineEdit_20->setText(QString::number(f2+s2));
    ui->lineEdit_21->setText(QString::number(f3+s3));
    ui->lineEdit_22->setText(QString::number(f4+s4));
    ui->lineEdit_23->setText(QString::number(f5+s5));
    ui->lineEdit_24->setText(QString::number(f6+s6));
    ui->lineEdit_25->setText(QString::number(f7+s7));
    ui->lineEdit_26->setText(QString::number(f8+s8));
    ui->lineEdit_27->setText(QString::number(f9+s9));

    clearfield();
}

void MainWindow::on_SUBTRACT_clicked()
{
    getdata();

    ui->lineEdit_19->setText(QString::number(f1-s1));
    ui->lineEdit_20->setText(QString::number(f2-s2));
    ui->lineEdit_21->setText(QString::number(f3-s3));
    ui->lineEdit_22->setText(QString::number(f4-s4));
    ui->lineEdit_23->setText(QString::number(f5-s5));
    ui->lineEdit_24->setText(QString::number(f6-s6));
    ui->lineEdit_25->setText(QString::number(f7-s7));
    ui->lineEdit_26->setText(QString::number(f8-s8));
    ui->lineEdit_27->setText(QString::number(f9-s9));

    clearfield();
}

void MainWindow::on_MULTIPLY_clicked()
{
    getdata();

    ui->lineEdit_19->setText(QString::number(f1*s1+f2*s4+f3*s7));
    ui->lineEdit_20->setText(QString::number(f1*s2+f2*s5+f3*s8));
    ui->lineEdit_21->setText(QString::number(f1*s3+f2*s6+f3*s9));

    ui->lineEdit_22->setText(QString::number(f4*s1+f5*s4+f6*s7));
    ui->lineEdit_23->setText(QString::number(f4*s2+f5*s5+f6*s8));
    ui->lineEdit_24->setText(QString::number(f4*s2+f5*s6+f6*s9));

    ui->lineEdit_25->setText(QString::number(f7*s1+f8*s4+f9*s7));
    ui->lineEdit_26->setText(QString::number(f7*s2+f8*s5+f9*s8));
    ui->lineEdit_27->setText(QString::number(f7*s3+f8*s6+f9*s9));

    clearfield();
}
