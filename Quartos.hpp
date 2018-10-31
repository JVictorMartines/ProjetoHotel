#include <cstdlib>
#include <iostream>

using namespace std;

class Quartos{
	public:
		int roomtype;//0 simples, 1 executivo, 2 presidencial
		float preco;
		int codcliente;
		int numquarto;
		bool ocupado;
		Quartos * anterior,* proximo;

		Quartos(int tipoquarto, int numquarto){//Eh necessario uma verificacao na interface para que o valor seja entre 0 e 2
			setRoomType(tipoquarto);
			setNumQuarto(numquarto);
			anterior=proximo=NULL;

		}

		void setRoomType(int tipoquarto){
			roomtype=tipoquarto;
			setPreco();
			setOcupado(false);
		}

		int getRoomType(){
			return roomtype;
		}

		void setPreco(){
			switch(roomtype){
				case 0:
					preco=150;
					break;
				case 1:
					preco=190;
					break;
				case 2:
					preco=290;
					break;
				default:
					preco=150;
					break;

			}
		}
		float getPreco(){
			return preco;
		}
		void setCodCliente(int cod){
			codcliente=cod;
		}

		int getCodCliente(){
			return codcliente;
		}

		void setNumQuarto(int roomnumber){
			numquarto=roomnumber;
		}

		int getNumQuarto(){
			return numquarto;
		}

		void setOcupado(bool busy){
			ocupado=busy;//ocupado=true e desocupado=false
		}

		bool getOcupado(){
			return ocupado;
		}

		friend class Hotel;

};

class Hotel{
	public:

		Quartos * primeiro,* atual;

		Hotel(){
			primeiro=atual=NULL;
		}

		bool inserir(int tipoquarto, int numquarto){
			atual=primeiro;
			Quartos * novo= new Quartos(tipoquarto,numquarto);
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
			Quartos * anterior = NULL;
			while(atual && numquarto < atual->numquarto){
				anterior=atual;
				atual=atual->proximo;
			}

			if(atual && numquarto==atual->numquarto){
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
				quartoocupar->setOcupado(true);
				quartoocupar->setCodCliente(codcliente);
				return true;
			}
			return false;
		}


		friend class Quartos;
};
