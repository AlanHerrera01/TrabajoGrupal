#include <iostream>
#include <stack>

int main() {
    std::stack<int> miPila; // Declaraci?n de la pila

    // Agregar elementos a la pila
    miPila.push(10);
    miPila.push(20);
    miPila.push(30);
	miPila.push(40);
	miPila.push(50);
	
    // Mostrar los elementos de la pila
    std::cout << "Elementos de la pila:" << std::endl;
    while (!miPila.empty()) {
        std::cout << miPila.top() << " ";
        miPila.pop();
    }
    std::cout << std::endl;

    return 0;
}

