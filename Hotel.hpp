#include <cstdlib>
#include <iostream>

#include "Quarto.hpp"

using namespace std;
class Hotel{
	public:
		
		Quartos * primeiro,* atual;
		
		Hotel(){
			primeiro=atual=NULL;
		}
		
		bool inserir(int tipoquarto, int numquarto){
			atual=primeiro;
			Quartos * novo= new Quarto(tipoquarto,numquarto);
			Quartos * anterior=NULL;
			Quartos * temp=NULL;
			
			while(atual && novo->numquarto < atual->numquarto){
				anterior=atual;
				atual=atual->proximo;				
			}
			
			if(!primeiro){
				primeiro=novo;
				return true;
			}
			temp=atual;
			anterior->proximo=novo;
			novo->anterior=anterior;
			novo->proximo=atual;
			atual->anterior=novo;
			
			return true;
				
		}
		
		Quartos * busca(int numquarto){
			atual=primeiro;
			while(atual && numquarto < atual->numquarto){
				anterior=atual;
				atual=atual->proximo;				
			}
			
			if(atual && numquarto==atual){
				return atual;
			}else{
				return NULL;
			}
		}
		
		bool desocupar(int numquarto){
			Quartos * quartodesocupar = NULL;
			quartodesocupar=busca(numquarto);
			
			if(!quartodesocupar){
				return false;//quarto nao encontrado
			}
			if(!quartodesocupar->getOcupado()){
				return false;//quarto ja desocupado
			}else{
				quartodesocupar->setOcupado(false);
				return true;
			}
			return false;
		}
		
		bool ocupar(int numquarto, int codcliente){
			Quartos * quartoocupar = NULL;
			quartoocupar=busca(numquarto);
			
			if(!quartoocupar){
				return false;//quarto nao encontrado
			}
			
			if(quartoocupar->getOcupado()){
				return false;//quarto ja ocupado
			}else{
				quartoocupado->setOcupado(true);
				quartoocupado->setCodCliente(int codcliente);
				return true;
			}
			return false;
		}
		
		
		class friend Quartos;
};
