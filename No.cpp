#include <iostream>
#include "No.hpp"

using namespace std;

No::No(Object valor){
	this->Valor = valor;
	this->prox =  NULL;
	this->ant = NULL;
}

void No::setValor(Object valor){
	this->Valor = valor;
}

int** No::getValor(){
	return this->Valor.getValue();
}

void No::setAnt(No* no){
	this->ant = no;
}
string No::getPosition(){
	return this->Valor.getPos();
}

No* No::getAnt(){
	return this->ant;
}

void No::setProx(No* prox){
	this->prox = prox;
}

No* No::getProx(){
	return this->prox;
}

void No::Mostrar(){
	this->Valor.MostrarMat();
}
