#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "Object.hpp"
#include "Lista.hpp"
#include <locale.h>
#include <string>

using namespace std;

int Hashing(string position, int size){
//Fun��o de c�lculo de posi��o na tabela Hash
	//M�todo da Congru�ncia Linear
	float a = 0.6180339887;
	int l = position.length();
	int sum = 0;
	for (int i = 0; i < l; i++){
		sum += position[i];
	}
	float key = sum * a;
	key = key - (int)key;
	return (int)(size*key);
}

int main(){
	int size, pos, op, op2, cont = 0, fi, fj, i, sub[4];
	int **Mat;
	string position, arq1, arq2;
	Object o;
	No* node;
	ifstream A1;
	FILE *A2;
	setlocale(LC_ALL, "Portuguese");
	//Usu�rio define o tamanho da tabela Hash
	cout << "\nTamanho da Hash: ";
	cin >> size;
	Lista Hash[size];
	do{
		cout << "Arquivo fonte: ";
		cin >> arq1;
		A1.open(arq1.c_str());
		do{
		cout << "Arquivo de posi��es: ";
		cin >> arq2;
		A2 = fopen (arq2.c_str(), "r");
		//Processos para leitura da matriz
		while (feof(A2)){
			fscanf(A2, "%d[^,]", &sub[i]);
			position +=sub[i];
		}
		fi = sub[2];
		fj = sub[3];
		pos = Hashing(position, size);
		node = Hash[pos].ProcuraItem(position);
		if (node == NULL){
			if (cont < size){
			//Contador para regular o tamanho da Hash
				i = 0;
				//Define Tamanho da Matriz
				Mat = (int **)malloc (fi * sizeof (int*)) ;
				for (int a = 0; a < fi; a++){
					Mat[a] = (int *)malloc (fj * sizeof (int)) ;
				}
				//Aloca valores do arquivo na Matriz
				for (i = 0; i < fi; i++){
					for (int a = 0; a < fj; a++){
						A1 >> Mat[i][a];
					}
				}
				//Cria a Matriz Transposta
				int MatT[fj][fi];
				for (int a = 0; a < fj; a++){
					for (int b = 0; b < fi; b++){
						MatT[a][b] = Mat[a][b];
					}
				}
				//Cria a Matriz que ser� armazenada na Hash
				int **MatM;
				MatM = (int **) malloc (i * sizeof (int*)) ;
				for (int a = 0; a < i; a++){
					MatM[a] = (int *) malloc (i * sizeof (int)) ;
				}
				for (int a = 0; a < fi; a++){
					for (int b = 0; b < fi; b++){
						MatM[a][b] = Mat[a][b] * MatT[a][b];
					}
				}
				//Objeto (chave(posi��o) e Matriz) que ser�o armazenados na Hash
				o.setPos(position);
				o.setValue(MatM, fi);
				//Guarda na Hash
				Hash[pos].insertItem(o);
				cont++;
			}
			else {
				cout << "Tabela cheia!!\n";
			}
		}
		else {
			//Caso a Matriz seccionada j� esteja armazenada na Hash
			cout << "Matriz j� analisada:\n";
			node->Mostrar();
		}
		fclose(A2);
		cout << "Novo arquivo de posi��es?\n1. Sim.\n2. N�o.\n";
		cin >> op2;
		}while(op2 != 2);
		cout << "Inserir novo arquivo fonte?\n1. Sim.\n2. N�o.\n";
		cin >> op;
	}while (op != 2);
	
	return 0;
}
