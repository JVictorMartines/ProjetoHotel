#ifndef BANCODADOS_H
#define BANCODADOS_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
#include <string.h>
#include <stdbool.h>
#include <QFile>
#include <QMessageBox>

//Bibliotecas de Classes
//#include estadia.hpp
//#include cliente.hpp

using namespace std;

typedef struct cliente CLIENTE;
struct cliente
{
    char nome[50];
    char rg[30];
    char hospedado[30];
    //..string hospedado = "Hospedado";
    bool status;
    char chegada[10];
    char saida[10];
    char fone[10];
    char tipoQuarto[10];
};


void flush_in();
void checkIn();
void listar();
void checkOut();
//VARIAVEL UNIVERSAL
QString local = "C:/Users/Kelvin/Documents/ProjetoHotel-master/Hotel/";
QString nome = "base.txt";


QFile arquivo(nome+local);
CLIENTE ctt;

int op;
void flush_in() {
    int ch;

    while ( ( ch = fgetc ( stdin ) ) != '\n' && ch != EOF) {}
}
void checkIn()
{

    flush_in();
    do
    {
        //arquivo = fopen("base.txt","a+b");
        arquivo.open(QFile::ReadOnly|QFile::Text);


        system("cls");
        cout<<"\nNome: ";
        gets(ctt.nome);

        cout<<"\nRG: ";
        gets(ctt.rg);

        cout<<"\nTelefone: ";
        gets(ctt.fone);

        cout<<"\nQuarto Escolhido: ";
        gets(ctt.tipoQuarto);

        cout<<"\nData de Chegada: ";
        gets(ctt.chegada);

        //cout<<"\nData da Saida: ";
        //gets(ctt.saida);



        //cout<<"\nData de Chegada: ";
        //gets(ctt.);

        strcpy(ctt.hospedado, "Hospedado");

        //CORRETO!! XD
        cout<<"\n";
        cout<<ctt.hospedado;

        ctt.status = true;

        arquivo.open(QFile::WriteOnly|QFile::Text);
        arquivo.close();
        cout<<"\n\nDeseja realizar novo Cadastro (s/n)?";
    }while(getche()=='s');

}
void listar()
{
    system("cls");

    //arquivo = fopen("base.txt","rb");
    arquivo.open(QFile::WriteOnly|QFile::Text);

    while(arquivo.open(QFile::ReadOnly|QFile::Text))
    {


        if(ctt.status == true){
            cout<<"\nNome: "<<ctt.nome;
            cout<<"\nRG: "<<ctt.rg;
            cout<<"\nTelefone: "<<ctt.fone;
            cout<<"\nQuarto Escolhido: "<<ctt.tipoQuarto;
            cout<<"\nData de Chegada: "<<ctt.hospedado;
            cout<<"\nData de Chegada: "<<ctt.chegada;
            cout<<"\nData de Saida: "<<ctt.saida;
            cout<<"\n--------------------";

            }
        else{
            cout<<"\nNome: "<<ctt.nome;
            cout<<"\nRG: "<<ctt.rg;
            cout<<"\nTelefone: "<<ctt.fone;
            cout<<"\nQuarto Escolhido: "<<ctt.tipoQuarto;
            cout<<"\nData de Chegada: "<<ctt.hospedado;
            cout<<"\nData de Chegada: "<<ctt.chegada;
            cout<<"\nData de Saida: ---------- ";//<<ctt.saida;
            cout<<"\n--------------------";
            }

        cout<<"\nNome: "<<ctt.nome;
        cout<<"\nRG: "<<ctt.rg;
        cout<<"\nTelefone: "<<ctt.fone;
        cout<<"\nQuarto Escolhido: "<<ctt.tipoQuarto;
        cout<<"\nData de Chegada: "<<ctt.hospedado;
        cout<<"\nData de Chegada: "<<ctt.chegada;
        cout<<"\nData de Saida: ---------- ";//<<ctt.saida;
        cout<<"\n--------------------";

    }
    arquivo.close();
    getch();

}
void checkOut()
{
    int posicao = 0; // Inicio do Arquivo;
    int achou = 0;
    char AltRg[30];
    char AltNome[50];

    flush_in();
    cout<<"Digite o RG: ";
    gets(AltRg);

    //arquivo = fopen("base.txt","r+b");
    arquivo.open(QFile::ReadOnly|QFile::Text);

    system("cls");
    op = -1;
    while(arquivo.open(QFile::ReadOnly|QFile::Text) && op!=0)
    {
        if(strcmp(AltRg,ctt.rg)==0)
        {

            flush_in();
            ctt.status = false;
            //cout<<false<<ctt.status;

            //Muda o valor que está em ctt.hospedado de "Hospedado" para "Saída Confirmada"
            strcpy(ctt.hospedado, "Saída Confirmada");

            cout<<"Data de Saida: ";
            gets(ctt.saida);

            //SE saida <> null,  hospedado... saida??

            fseek(arquivo, posicao, SEEK_SET);
            achou = arquivo.open(QFile::WriteOnly|QFile::Text);;

        }
        /*É aqui que a posição deve ser atualizada, no final do ciclo WHILE,
        sendo descolocado de +sizeof(cliente) a cada iteração do ciclo*/
        posicao = posicao + sizeof(CLIENTE);

        /*Move posição de leitura/escrita de volta para a posição original*/
        fseek(arquivo, posicao, SEEK_SET);
    }
    op=-1;
    arquivo.close();
}

#endif // BANCODADOS_H
