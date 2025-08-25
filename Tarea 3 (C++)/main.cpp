// main.cpp
#include <iostream>
#include "Pila.h"
#include "Terminal.h"
#include "NoTerminal.h"
#include "Estado.h"

void ejemplo() {
    Pila pila;
    
    // Crear instancias de las clases derivadas de ElementoPila
    ElementoPila* estado0 = new Estado(0);
    ElementoPila* terminalID = new Terminal("id");
    ElementoPila* noTerminalE = new NoTerminal("E");

    // Agregar los elementos a la pila
    pila.push(estado0);
    pila.push(terminalID);
    pila.push(noTerminalE);

    pila.muestra();

    // Recuerda liberar la memoria al hacer pop
    ElementoPila* elemento = pila.pop();
    if (elemento != nullptr) {
        elemento->imprimir();
        std::cout << " eliminado de la pila" << std::endl;
        delete elemento;
    }

    pila.muestra();
}

int main() {
    // Llamar a la función ejemplo
    
    ejemplo();

    return 0;
}