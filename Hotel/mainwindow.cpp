#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "avl.h"
#include "cliente.h"
#include "estadia.h"
#include "quartos.h"
#include <QMessageBox>
#include <QDate>
using namespace std;

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
    QString code;

    Quartos *quartos = nullptr;

    if(ui->simples->isChecked()){               //quarto = "Simples";
        quartos->setRoomType(0);
    }else if(ui->executivo->isChecked()){       //quarto = "Executivo";
        quartos->setRoomType(1);
    }else if(ui->presidencial->isChecked()){    //quarto = "Presidencial";
        quartos->setRoomType(2);
    }

    QDate dEntrada = ui->dateEdit->date();
    QString diaEntrada = dEntrada.toString();
    QDate dSaida = ui->dateEdit_2->date();
    QString diaSaida = dSaida.toString();
    //
    AVL avl;
    Cliente *cliente = nullptr;
    Estadia *estadia = nullptr;


    cliente->setCod(code.toInt());
    cliente->setNome(nome.toStdString());
    cliente->setRG(rg.toStdString());
    cliente->setFone(fone.toStdString());

    estadia->setChegada(diaEntrada.toStdString());
    estadia->setSaida(diaSaida.toStdString());


    //
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
