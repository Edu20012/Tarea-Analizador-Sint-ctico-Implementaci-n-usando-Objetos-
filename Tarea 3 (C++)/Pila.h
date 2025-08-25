// Pila.h
#ifndef PILA_H
#define PILA_H

#include <list>
#include "ElementoPila.h"

class Pila {
private:
    std::list<ElementoPila*> lista;

public:
    Pila() {}
    ~Pila();
    void push(ElementoPila* x);
    ElementoPila* pop();
    ElementoPila* top();
    void muestra();
};

#endif