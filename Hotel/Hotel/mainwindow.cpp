#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_checkIn_clicked()
{

    QMessageBox::about(this,"Check-In","Check-In feito com sucesso!");
}

void MainWindow::on_checkOut_clicked()
{

    QMessageBox::about(this,"Check-Out","Check-Out feito com sucesso!");
}
