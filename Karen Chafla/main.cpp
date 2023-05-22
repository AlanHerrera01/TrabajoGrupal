#include <iostream>
#include "pila.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Pila *pila=NULL;
	pila = crearPila(5);
	push(pila,100);
	imprimir(pila);
	cout<<endl;
	system("pause");
	push(pila,126);
	imprimir(pila);
	cout<<endl;
	system("pause");
	push(pila,500);
	imprimir(pila);
	cout<<endl;
	system("pause");
	push(pila,400);
	imprimir(pila);
	cout<<endl;
	system("pause");
	pop(pila);
	imprimir(pila);
	cout<<endl;
	system("pause");
	return 0;
}