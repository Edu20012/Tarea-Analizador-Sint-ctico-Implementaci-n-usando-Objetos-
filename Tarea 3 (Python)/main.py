class ElementoPila:
    def imprimir(self):
        raise NotImplementedError("Subclasses must implement imprimir method")

class Terminal(ElementoPila):
    def __init__(self, valor):
        self.valor = valor

    def imprimir(self):
        print(f"Terminal: {self.valor}", end="")

class NoTerminal(ElementoPila):
    def __init__(self, valor):
        self.valor = valor

    def imprimir(self):
        print(f"No Terminal: {self.valor}", end="")

class Estado(ElementoPila):
    def __init__(self, valor):
        self.valor = valor

    def imprimir(self):
        print(f"Estado: {self.valor}", end="")

class Pila:
    def __init__(self):
        self.lista = []

    def push(self, elemento):
        self.lista.insert(0, elemento)  # Insertar al principio para simular pila

    def pop(self):
        if self.lista:
            return self.lista.pop(0)  # Eliminar del principio para simular pila
        return None

    def top(self):
        if self.lista:
            return self.lista[0]
        return None

    def muestra(self):
        print("Pila: ", end="")
        for elemento in reversed(self.lista):  # Imprimir en orden inverso para mostrar la pila correctamente
            elemento.imprimir()
            print(" ", end="")
        print()

def ejemplo():
    pila = Pila()

    # Crear instancias de las clases derivadas de ElementoPila
    estado0 = Estado(0)
    terminalID = Terminal("id")
    noTerminalE = NoTerminal("E")

    # Agregar los elementos a la pila
    pila.push(estado0)
    pila.push(terminalID)
    pila.push(noTerminalE)

    pila.muestra()

    # Recuerda liberar la memoria al hacer pop (no es necesario en Python debido al garbage collector)
    elemento = pila.pop()
    if elemento:
        elemento.imprimir()
        print(" eliminado de la pila")

    pila.muestra()

if __name__ == "__main__":
    ejemplo()