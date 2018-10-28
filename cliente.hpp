//codigo da classe Cliente
//Essa classe Cliente faz o papel da classe "NO" com as adaptacoes para o projeto

#include <string>
using namespace std;
class Cliente{
		private:
		public:
				int codcliente;
				string nome, rg, fone;
				int altura, ae, ad;;

				Cliente *pai, *esq, *dir;
				void setAltura(){
					int ae, ad;
					if(esq){
						ae=esq->altura;
						}else{
							ae=-1;
							}
                    if(dir){
						ad=dir->altura;
						}else{
							ad=-1;
							}
                    altura=(max(ad,ae))+1;
				}
				void setCod(int cod){
					codcliente=cod;
					}
				void setNome(string name){
					nome=name;
					}
				void setRG(string id){
					rg=id;
					}
				void setFone(string tel){
					fone=tel;
					}
		public:
				Cliente(int cod, string name, string rg, string tel){
					setCod(cod);
					setNome(name);
					setRG(rg);
					setFone(tel);

					pai=esq=dir=NULL;
					}

				/*
				int fator(){
						int ae = esq ? (esq->altura) : -1;
						int ad = dir ? (dir->altura) : -1;
						return ad - ae;
				}*/

				int fator(){
					setAltura();
					return ad - ae;
					}


					friend class AVL;
};
