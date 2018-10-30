#include <cstdlib>
#include <iostream>
#include "Hotel.hpp"

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
		
		class friend Hotel;
	
};
