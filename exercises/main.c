#include <stdio.h>
#include "nodo.h"

/*
 *	En serio...
 *	¿Por que tabula con espacios? :(
*/

int main() {
	printf("===== Repo de ejercicios de nodos =====\n");

	// Ejercicio 1
	Nodo* n = crearNodo(10);
	if (n) {
		printf("Nodo creado con dato: %d\n", n->data);
		liberarNodos(n);
	}

	// Ejercicio 2
	int tam = 5;
	Nodo* arreglo = crearArregloNodos(tam);
    
		// TODO(1): imprimir arreglo
		if(arreglo) {
			n = arreglo;
			while(n < arreglo + tam) printf("%d, ", (n++)->data);

			puts("\b\b ");
		}

	// Ejercicio 3
	arreglo = agregarNodo(arreglo, &tam, 99);

		// TODO(2): imprimir arreglo actualizado
		if(arreglo) {
			n = arreglo;
			while(n < arreglo + tam) printf("%d, ", (n++)->data);

			puts("\b\b ");
		}
	
	// Ejercicio 4
	liberarArregloNodos(arreglo);

	// Ejercicio 5
	Nodo* inicio = construirTresNodos();

		// TODO(3): imprimir nodos
		if(inicio) {
			Nodo* z = inicio;

			while(z) {
				n = z->sig;
				printf("%d->", z->data);

				z = n;
			}
			puts("NULL");

		// Ejercicio 6
			int total = contarNodos(inicio);
			printf("Total de nodos: %d\n", total);

			liberarNodos(inicio);
		}

	// Ejercicio 7
	Nodo* desdeEntrada = crearNodosPorEntrada();

		// TODO(4): imprimir nodos
		if(desdeEntrada) {
			Nodo* z = desdeEntrada;

			while(z) {
				n = z->sig;
				printf("%d->", z->data);

				z = n;
			}
			puts("NULL");

			liberarNodos(desdeEntrada);
		}

    return 0;
}
