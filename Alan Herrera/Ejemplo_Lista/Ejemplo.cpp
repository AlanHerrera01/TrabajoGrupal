#include <iostream>
#include <cstdlib>
#include <ctime>

typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

void insertar(Nodo** primero, Nodo** ultimo, int dato) {
    Nodo* nuevo_nodo = new Nodo;
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = nullptr;

    if (*primero == nullptr) {
        *primero = nuevo_nodo;
        *ultimo = nuevo_nodo;
    } else {
        (*ultimo)->siguiente = nuevo_nodo;
        *ultimo = nuevo_nodo;
    }
}

void mostrar(Nodo* primero) {
    Nodo* actual = primero;
    while (actual != nullptr) {
        std::cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    std::cout << std::endl;
}

void eliminarMayores(Nodo** primero, Nodo** ultimo, int valor) {
    Nodo* actual = *primero;
    Nodo* anterior = nullptr;

    while (actual != nullptr) {
        if (actual->dato > valor) {
            if (anterior == nullptr) {
                *primero = actual->siguiente;
            } else {
                anterior->siguiente = actual->siguiente;
            }
            Nodo* temp = actual;
            actual = actual->siguiente;
            delete temp;
        } else {
            anterior = actual;
            actual = actual->siguiente;
        }
    }

    *ultimo = anterior;
}

int main() {
    srand(time(nullptr)); // Inicializar semilla para números aleatorios
	 int valor;
    Nodo* primero = nullptr;
    Nodo* ultimo = nullptr;

    for (int i = 0; i < 10; i++) {
        int dato = rand() % 100 + 1; // Generar número aleatorio entre 1 y 100
        insertar(&primero, &ultimo, dato);
    }

    std::cout << "Lista original: "<<std::endl;
    mostrar(primero);
	std::cout << "Ingrese el limite maximo: ";
    std::cin>>valor;
    eliminarMayores(&primero, &ultimo, valor);

    std::cout << "Lista despues de eliminar los nodos mayores a " << valor << ":  "<<std::endl;

    mostrar(primero);

    return 0;
}
