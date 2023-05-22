#include <iostream>
#include "listaSimple.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x;
	Nodo *e; //auxiliar para reservar memoria para el nuevo elemento.
	
	Lista *lista=NULL;	//Puntero de tipo lista. lista vacia
	
	lista = agregarFinal(lista,75);
	lista = agregarFinal(lista,100);
	lista = agregarFinal(lista,15);
	system("pause");
	
	imprimirLista(lista);

	
	return 0;
}