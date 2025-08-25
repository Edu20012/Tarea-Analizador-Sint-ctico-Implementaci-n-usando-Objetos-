// Pila.cpp
#include "Pila.h"
#include <iostream>

Pila::~Pila() {
    while (!lista.empty()) {
        delete pop();
    }
}

void Pila::push(ElementoPila* x) {
    lista.push_front(x);
}

ElementoPila* Pila::pop() {
    if (lista.empty()) return nullptr;
    ElementoPila* x = lista.front();
    lista.pop_front();
    return x;
}

ElementoPila* Pila::top() {
    if (lista.empty()) return nullptr;
    return lista.front();
}

void Pila::muestra() {
    std::cout << "Pila: ";
    for (auto it = lista.rbegin(); it != lista.rend(); ++it) {
        (*it)->imprimir();
        std::cout << " ";
    }
    std::cout << std::endl;
}