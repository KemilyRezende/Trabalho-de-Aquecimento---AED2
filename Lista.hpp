#include <iostream>
#include "No.hpp"
#ifndef __LISTA__HPP
#define __LISTA__HPP

using namespace std;

class Lista{
	private:
		No* cabeca;
		No* cauda;
	public:
		Lista();
		Lista (Object v);
		void insertItem(Object v);
		int Size();
		bool verificaVazia();
		void removeItem(Object v);
		No* ProcuraItem(string position);
		void ExibeItem(string position);
};

#endif

