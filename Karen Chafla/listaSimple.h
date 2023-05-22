#include <iostream>

using namespace std;

struct Nodo{
	int dato; //informacion
	struct Nodo *sig; //enlace o autoreferencia
};

//Cabecera
struct Lista{
	struct Nodo *pri;
	struct Nodo *ult;
};

//crear un nodo en memoria
Nodo* crearNodo(int dato)
{
	Nodo *e=new Nodo; //Reservando memoria para 1 elemento tipo Nodo
	if(e!=NULL)
	{
		e->dato = dato;
		e->sig=NULL;
		cout<<"\nDato Creado: "<<e->dato;
	}
	return e;
}

//Agregar nodo al final de la lista
Lista* agregarFinal(Lista* L,int dato)
{
	Nodo *e=crearNodo(dato);
	if(e!=NULL)
	{
		if(L!=NULL)//Listo no esta vacia
		{
			cout<<"\nLista NO esta vacia, se agregara nodo al final"<<endl;
			L->ult->sig=e; //Modifico el *sig del ultimo nodo de la lista
			L->ult = e; //Modifico el *ult para que apunte al nuevo nodo
			return L;
		}
		else{ //rn l;lista vacia
			cout<<"\nLista vacia, se creara el primer nodo"<<endl;
			Lista *l=new Lista; //Reservo memoria para un elemento tipo lista
			l->pri = e;
			l->ult = e;
			return l;
		}
	}
	else
		return NULL;	
}

void imprimirLista(Lista *L)
{
	int i=1;
	if(L!=NULL)
	{
		cout<<"\n **** Lista Completa **** "<<endl;		
		Nodo *e=L->pri; //ubico mi puntero auxiliar en el primer nodo de la lista
		
		do{
			cout<<"\nNodo "<<i<<" :"<<e->dato<<endl;
			e=e->sig;
			i++;		
		}while(e!=NULL);		
	}
	else
	{
		cout<<"\nLista vacia, ingrese al menos 1 nodo."<<endl;
	}
}