#include <iostream>
#include "Object.hpp"
#ifndef __NO__HPP
#define __NO__HPP

using namespace std;

class No{
	private:
		Object Valor;
		No* prox;
		No* ant;
	public:
		No(Object valor);
		void setValor(Object valor);
		int** getValor();
		string getPosition();
		void setProx(No* no);
		No* getProx();
		void setAnt(No* no);
		No* getAnt();
		void Mostrar();
};

#endif

