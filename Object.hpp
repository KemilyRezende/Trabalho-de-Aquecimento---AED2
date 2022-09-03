#include <iostream>
#ifndef __OBJECT__HPP
#define __OBJECT__HPP

using namespace std;

class Object{
	private:
		int tam;
		string position;
		int **value;
	public:
		void setPos(string pos);
		string getPos();
		void setValue(int **value, int i);
		int** getValue();
		void MostrarMat();
};

#endif
