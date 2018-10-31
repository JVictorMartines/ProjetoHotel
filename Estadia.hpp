//Esse arquivo contem o codigo da classe estadia e da LDDE
#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

class Estadia{

	private:
	string chegada;
	string saida;
	int codcliente;
	bool status;
	Estadia * anterior;
	Estadia * proximo;
	int dias;
	float gasto;

	void setCodCliente(int cod){
		codcliente = cod;
	}

	void setChegada(string checkin){
		chegada = checkin;
	}

	void setSaida(string checkout){
		saida = checkout;
	}
	void setStatus(bool tag){
		status = tag;
	}

	void setAnt(Estadia * ant){
		anterior = ant;
	}
	void setProx(Estadia * prox){
		proximo = prox;
	}
	void setGasto(float preco){
		gasto=preco*dias;
	}



	public:
	Estadia(int cod, string checkin, string checkout, bool tag, int qtddias, float preco){
		setCodCliente(cod);
		setChegada(checkin);
		setSaida(checkout);
		setStatus(tag);
		proximo = NULL;
		anterior = NULL;
		dias=qtddias;
		setGasto(preco);


	}

	Estadia * getAnt(){
		return anterior;
	}
	Estadia * getProx(){
		return proximo;
	}

	float getGasto(){
		return gasto;
	}

	friend class LDDE;
};


class LDDE{
  public:

    LDDE():primeiro(NULL), atual(NULL){};

    bool inserir(int cod, string checkin, string checkout, bool hospedado, int qtddias, float preco){
      Estadia * novo = new Estadia(cod,checkin, checkout, hospedado, qtddias, preco);
      Estadia * temp = NULL;

      atual=primeiro;
      while(atual != NULL && atual->codcliente < novo->codcliente){
        temp=atual;
        atual=atual->proximo;
      }
      if(temp){
        temp->proximo=novo;
      }else{
        primeiro=novo;
      }

      novo->proximo=atual;

      if(atual){
        novo->anterior=atual->anterior;
        atual->anterior=novo;
      }

      return true;
    };

   bool remove(int cod){
      Estadia * ant = NULL;
      //ant=NULL;
      atual=primeiro;

        while(atual && atual->codcliente<cod){
          ant=atual;
          atual=atual->proximo;
        }
        if(atual && atual->codcliente==cod){
          ant->proximo=atual->proximo;


          delete atual;
          atual=ant->proximo;
          atual->anterior=ant;
        }

        return true;
   };

   void imprime(){//metodo para fim de testes deve ser apagado na versao final
      if(!primeiro){
        cout<<"Nao existe valor a ser impresso"<<endl;
      }else{
      atual=primeiro;

        while(atual != NULL){
          cout<<atual->codcliente<<endl;
          atual=atual->proximo;
        }
      }
    }

     Estadia * busca(int cod){//precisa de verificacao, pois se nao encontrar atual=NULL
      //Node<Tipo> * novo = new Node<Tipo>(valor);
      atual=primeiro;
       while(atual != NULL && atual->codcliente < cod){
        atual=atual->proximo;
      }
      if(atual && atual->codcliente==cod){
      return atual;
      }
      //atual->codcliente = -1;
      atual = NULL;
      return atual;
    }

    Estadia * primeiro,* atual;
    int cod;

	friend class Estadia;

};
