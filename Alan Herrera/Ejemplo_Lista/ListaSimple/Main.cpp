#include <iostream>
typedef int Dato;
#include "Nodo.h"
#include "Lista.h"
using namespace std;
int main()
{
Dato d;
Lista lista; // crea lista vacía
  cout << "Elementos de la lista, termina con -1 "<< endl;
  do {
    cin>> d;
    lista.insertarCabezaLista (d);
  }while (d != -1); // recorre la lista para a escribir sus elementos
  cout << "\t Elementos de la lista generados al azar" << endl;
  lista.visualizar();
  return 0;
}
