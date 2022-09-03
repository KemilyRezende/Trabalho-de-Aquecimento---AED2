#include <iostream>
#include <stdlib.h>
#include "Object.hpp"

using namespace std;

void Object::setPos(string pos){
	this->position = pos;
}

string Object::getPos(){
	return this->position;
}

void Object::setValue(int **value, int i){
	this->tam = i;
	this->value = (int **) malloc (i * sizeof (int*)) ;
	for (int a = 0; a < i; a++){
		this->value[a] = (int *) malloc (i * sizeof (int)) ;
	}
	this->value = value;
	/*for (int a = 0; a < tam; a++){
		for (int b = 0; b < tam; b++){
			this->value[a][b] = value[a][b];
		}
	}*/
}

int** Object::getValue(){
	return this->value;
}

void Object::MostrarMat(){
	for (int i = 0; i <this->tam; i++){
		for (int j = 0; j < this->tam; j++){
			cout << this->value[i][j] << "  ";
		}
		cout << endl;
	}
}
