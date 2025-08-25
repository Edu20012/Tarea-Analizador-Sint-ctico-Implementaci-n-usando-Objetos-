// Terminal.h
#ifndef TERMINAL_H
#define TERMINAL_H

#include "ElementoPila.h"

class Terminal : public ElementoPila {
private:
    std::string valor;

public:
    Terminal(std::string valor) : valor(valor) {}

    void imprimir() override {
        std::cout << "Terminal: " << valor;
    }
};

#endif