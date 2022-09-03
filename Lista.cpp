#include <iostream>
#include "No.hpp"
#include "Lista.hpp"

using namespace std;

Lista::Lista(){
	cabeca = NULL;
	cauda = NULL;
}

Lista::Lista(Object v){
	cabeca = new No(v);
	cauda = cabeca;
}

void Lista::insertItem(Object v){
	No* novo_no = new No(v);
	if (verificaVazia()){
		cabeca = novo_no;
		cauda = novo_no;
	}
	else{
		novo_no->setAnt(cauda);
		cauda->setProx(novo_no);
		cauda = novo_no;
		
	}
}

bool Lista::verificaVazia(){
	return (cabeca == NULL);
}

int Lista::Size(){
	if(verificaVazia()){
		cout << "\nLista vazia -> tamanho = 0.";	
	}
	No* c = cabeca;
	int tam = 0;
	do
	{
		c = c->getProx();
		tam++;
	}
	while(c);
	
	return tam;
}

void Lista::removeItem(Object v){
	if (verificaVazia()){
		cout << "\nLista vazia -> tamanho = 0.";
	}
	else{
		No* c = this->cabeca;
		No* a;
		No* p;
		do{
			if (c->getValor() == v.getValue()){
				if (c == this->cabeca){
					this->cabeca = c->getProx();
					this->cabeca->setAnt(NULL);
					break;
				}
				else if (c == this->cauda){
					this->cauda = c->getAnt();
					this->cauda->setProx(NULL);
					break;
				}
				else{
				a = c->getAnt();
				p = c->getProx();
				a->setProx(p);
				p->setAnt(a);
				break;
				}
			}
			c = c->getProx();
		}while (c);
	}
}
No* Lista::ProcuraItem(string position){
	int cont = 0;
	No* c = cabeca;
	do {
		if (c->getPosition() == position){
			cont = 1;
			break;
		}
	}while(c);
	if (cont == 1){
		return c;
	}
	else{
		return NULL;
	}
}
void Lista::ExibeItem(string position){
	No* item = ProcuraItem(position);
	if ( item != NULL){
		item->Mostrar();
	}
}
