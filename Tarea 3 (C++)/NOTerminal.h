// NoTerminal.h
#ifndef NO_TERMINAL_H
#define NO_TERMINAL_H

#include "ElementoPila.h"

class NoTerminal : public ElementoPila {
private:
    std::string valor;

public:
    NoTerminal(std::string valor) : valor(valor) {}

    void imprimir() override {
        std::cout << "No Terminal: " << valor;
    }
};

#endif