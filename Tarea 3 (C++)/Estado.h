// Estado.h
#ifndef ESTADO_H
#define ESTADO_H

#include "ElementoPila.h"

class Estado : public ElementoPila {
private:
    int valor;

public:
    Estado(int valor) : valor(valor) {}

    void imprimir() override {
        std::cout << "Estado: " << valor;
    }
};

#endif