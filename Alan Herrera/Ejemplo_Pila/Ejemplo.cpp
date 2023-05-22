/*Escribir un programa que utilice pilas para comprobar si es 
una frase/palabra es un palíndromo*/
#include <iostream>
#include "pilalineal.h"
#include <string>
typedef char TipoDeDato;
using namespace std;
int main(){
    PilaLineal pilaChar; // crea pila vacía
    TipoDeDato ch;
    bool esPal;
    char pal[81];
    cout << "Teclea la palabra verificar si es palíndromo: ";
    gets(pal);
    for (int i = 0; i < strlen(pal); )
    {
        char c;
        c = pal[i++];
        pilaChar.insertar(c);
    }
    // se comprueba si es palíndromo
    esPal = true;
    for (int j = 0; esPal && !pilaChar.pilaVacia(); ){
        char c;
        c = pilaChar.quitar();
        esPal = pal[j++] == c;
    }
    pilaChar.limpiarPila();
    if (esPal)
    cout << "La palabra " << pal << " es un palíndromo \n";
    else
    cout << "La palabra " << pal << " no es un palíndromo \n";
    return 0;
}