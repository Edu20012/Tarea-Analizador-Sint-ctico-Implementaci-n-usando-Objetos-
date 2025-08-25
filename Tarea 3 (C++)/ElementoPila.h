// ElementoPila.h
#ifndef ELEMENTO_PILA_H
#define ELEMENTO_PILA_H

#include <iostream>
#include <string>

class ElementoPila {
public:
    virtual ~ElementoPila() {}
    virtual void imprimir() = 0; // Función virtual pura para imprimir el elemento
};

#endif