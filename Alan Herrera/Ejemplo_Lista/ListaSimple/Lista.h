#include <iostream>
using namespace std;
typedef int dato;
#include "Nodo.h"
class Lista{
	protected:
	Nodo* primero;
	public:
	Lista(){
		primero = NULL;
	}
	void crearLista();
	void insertarCabezaLista(Dato entrada);
	void visualizar ();
};
void crearLista(){
  int x;
  Nodo* primero = 0;
  cout << "Termina con -1"<< endl;
  do {
    cin >> x;
    if ( x!= -1){
      primero = new Nodo(x,primero);
    }
  }while (x!= -1);
}
void Lista::insertarCabezaLista(Dato entrada) {
  Nodo* nuevo;
  nuevo = new Nodo(entrada);
  nuevo -> ponerEnlace(primero); // enlaza nuevo con el primero
  primero = nuevo; // mueve primero y apunta al nuevo nodo
};
void Lista::visualizar(){
  Nodo* n;
  int k =0;
  n = primero;
  while(n!= NULL){
    char c;
    k++; c= (k%15 !=0 ? ' ': '\n');
    cout<<n -> datoNodo()<< c;
    n = n -> enlaceNodo();
}
}
