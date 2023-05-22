#include <iostream>

using namespace std;

struct Pila{
	int tope;
	int max;
	int *arreglo;
};

Pila *crearPila(int max)
{
	cout<<"\nCrear pila con "<<max<<" elementos."<<endl;
	Pila *pila=new Pila; 
	pila->max=max;
	pila->tope=-1;
	pila->arreglo=new int[max];
	return pila;
}

bool estaLlena(Pila *pila)
{
	return (pila->tope==pila->max-1);		
}

bool estaVacia(Pila *pila)
{
	return (pila->tope==-1);
}

void push(Pila *pila,int dato)
{
	if(estaLlena(pila))
	{ 
		cout<<"\nLa pila esta llena."<<endl;
	}
	else
	{
		++pila->tope;
		pila->arreglo[pila->tope]=dato;
		cout<<"\nSe agrego: "<<pila->arreglo[pila->tope]<<endl;
	}
}
void pop(Pila *pila)
{
	if(estaVacia(pila))
	{
		cout<<"\nLa pila esta vacia."<<endl;
	}
	else
	{
		cout<<"\nSe elimino: "<<pila->arreglo[pila->tope]<<endl;
		--pila->tope;
	}
}

void imprimir(Pila *pila)
{
	if(pila!=NULL)
	{
		for(int i=pila->tope;i>=0;i--)
			cout<<"\n"<<i<<": "<<pila->arreglo[i];
		
	}
}