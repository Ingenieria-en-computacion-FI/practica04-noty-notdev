#include <stdio.h>
#include "nodo.h"

int main() {
    printf("===== Repo de ejercicios de nodos =====\n");

    // Ejercicio 1
    Nodo* n1 = crearNodo(10);
    if (n1) printf("Nodo creado con dato: %d\n", n1->dato);

    // Ejercicio 2
    Nodo* arreglo = crearArregloNodos(5);
    // TODO(1): imprimir arreglo

    // Ejercicio 3
    int tam = 5;
    arreglo = agregarNodo(arreglo, &tam, 99);
    // TODO(2): imprimir arreglo actualizado

    // Ejercicio 4
    liberarNodos(arreglo, tam);
    liberarNodos(n1, 1);

    // Ejercicio 5
    Nodo* inicio = construirTresNodos();
    // TODO(3): imprimir nodos

    // Ejercicio 6
    int total = contarNodos(inicio);
    printf("Total de nodos: %d\n", total);

    // Ejercicio 7
    Nodo* desdeEntrada = crearNodosPorEntrada();
    // TODO(4): imprimir nodos

    return 0;
}
