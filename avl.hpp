//Esse eh o codigo da Arvore Balanceada
//Ela nao usa recursao, quando eh feita uma insersao ela altera apenas a altura dos nodes necessarios
//A classe faz isso sem precisar passar por nodes desnecessarios

#include <cstdlib>
#include <iostream>
#include <string>
#include "no.hpp"
#include "cliente.hpp"
using namespace std;

class AVL{
  public:
	 Cliente* raiz;
	 AVL(): raiz(NULL){
	 }

	 void erd(Cliente* n){
		if(!n)
		  return;

		erd(n->esq);
		cout << n->codcliente << " (" << n->altura << "," << n->fator()<< ") ";
		erd(n->dir);
		

	 }

	 void ajustaAltura(Cliente* n){
/*
		if(n && n->pai){
		  if(n->pai->altura < n->altura + 1){
			 n->pai->altura = n->altura+1;
			 ajustaAltura(n->pai);
		  }
		}
*/
		if(n){
	        Cliente* atual = n;
			while(atual->pai){
				if(atual){
					atual->setAltura();
				}
				atual=atual->pai;
				
			}
		}
	}

	 void RightRotate(Cliente* n){
		cout << "Right" << endl;
		Cliente* x = n;
		Cliente* y = n->esq;
		Cliente* b =  y->dir;
		Cliente* z =  x->pai;

		y->dir = x;
		x->pai = y;

		x->esq = b;
		if (b)
		  b->pai = x;

		y->pai = z;
		if(z){
		  if(y->codcliente < z->codcliente)
			 z->esq = y;
		  else
			 z->dir = y;
		}
		else{
		  raiz = y;
		}

		x->altura -= 2;
		ajustaAltura(b);
		ajustaAltura(x);
		ajustaAltura(y);
	 }
	 void LeftRotate(Cliente* n){
		cout << "Left" << endl;
		Cliente* x = n;
		Cliente* y = n->dir;
		Cliente* b =  y->esq;
		Cliente* z =  x->pai;

		y->esq = x;
		x->pai = y;

		x->dir = b;
		if (b)
		  b->pai = x;

		y->pai = z;
		if(z){
		  if(y->codcliente < z->codcliente)
			 z->esq = y;
		  else
			 z->dir = y;
		}
		else{
		  raiz = y;
		}
		x->altura -= 2;
		ajustaAltura(b);
		ajustaAltura(x);
		ajustaAltura(y);
	 }

	 void balanceie(Cliente* n){
		cout << "balanceando" << endl;
		if( n->fator() >= 2 ){
		  if( n->dir && n->dir->fator() < 0 )
			 RightRotate(n->dir);
		  LeftRotate(n);
		}else if(n->fator() <= -2 ){
		  if( n->esq && n->esq->fator() > 0 )
			 LeftRotate(n->esq);
		  RightRotate(n);
		}
		//erd(raiz); erd nao pode ser chamado na versao final
	 }


	 bool Insere(int cod, string name, string rg, string tel){
	 	Cliente* atual = raiz;
		Cliente* anterior = NULL;
		Cliente* novo = new Cliente(cod, name, rg, tel);
		novo->setAltura();

		while(atual){
		  anterior = atual;
		  if(cod < atual->codcliente )
			 atual = atual->esq;
		  else
			 atual = atual->dir;
		}

		if(!anterior){
		  raiz = novo;
		  return true;
		}

		if(cod < anterior->codcliente)
		  anterior->esq = novo;
		else
		  anterior->dir = novo;
		novo->pai = anterior;
		
		ajustaAltura(novo);

		Cliente* at = novo->pai;
		while(at){
			balanceie(at);
			ajustaAltura(at->esq);
			ajustaAltura(at->dir);
			cout << at->codcliente << endl;
			at = at->pai;
		}
		//erd(raiz); erd nao pode ser chamado na versao final
		return true;

	 }

	 void deletaNo(Cliente* n){
		if(!n)
		  return;
		deletaNo(n->esq);
		deletaNo(n->dir);
		delete n;
	 }
	 virtual ~AVL(){
		deletaNo(raiz);
		raiz=NULL;
	 }

	 friend class Cliente;

};
