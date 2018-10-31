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
    QString nome = ui->txt_nome->text();
    QString rg = ui->txt_rg->text();
    QString fone = ui->txt_telefone->text();

    QString quarto;
    if(ui->simples->isChecked()){
        quarto = "Simples";
        //quarto = 1;
    }else if(ui->executivo->isChecked()){
        quarto = "Executivo";
        //quarto = 2;
    }else if(ui->presidencial->isChecked()){
        quarto = "Presidencial";
        //quarto = 3;
    }



    QMessageBox::about(this,"Check-In","Check-In feito com sucesso!");

    ui->txt_nome->clear();
    ui->txt_rg->clear();
    ui->txt_telefone->clear();
    ui->txt_nome->setFocus();
}

void MainWindow::on_checkOut_clicked()
{
    QString rg_2 = ui->txt_rg_2->text();

    QMessageBox::about(this,"Check-Out","Check-Out feito com sucesso!");
    ui->txt_rg_2->clear();
    ui->txt_rg_2->setFocus();
}
