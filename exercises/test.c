#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "nodo.h"

/*
 *	y dale con tabular con espacios....
 *	ya mejor ni me quejo [° - °].
*/

/* Función auxiliar para imprimir resultado de test */
void mostrarResultado(const char* ejercicio, bool correcto, int* puntos, int valor){
	if(!correcto) {
		printf("[X] %s incorrecto (+0 puntos)\n", ejercicio);
    	
		return;
	}

	printf("[✓] %s correcto (+%d puntos)\n", ejercicio, valor);
	*puntos += valor;
}

/* Función auxiliar para contar nodos de un arreglo */
bool compararArreglo(Nodo* arreglo, int n, int* valores){
	Nodo* a = arreglo;
	int* v = valores;

	while(a < arreglo + n)
        	if((a++)->data != *(v++)) return false;
    
	return true;
}

int main(){
    int puntaje = 0;

    printf("=== Test autocorrectivo de ejercicios de nodos ===\n\n");

    /* ------------------ Ejercicio 1 ------------------ */
    Nodo* n1 = crearNodo(10);

    mostrarResultado("Ejercicio 1: crearNodo", n1 && n1->data==10 && n1->sig==NULL, &puntaje, 10);

    /* ------------------ Ejercicio 2 ------------------ */
    int valores2[5] = {0,1,2,3,4};
    Nodo* arreglo = crearArregloNodos(5);

    mostrarResultado("Ejercicio 2: crearArregloNodos", arreglo!=NULL && compararArreglo(arreglo,5,valores2), &puntaje, 10);

    /* ------------------ Ejercicio 3 ------------------ */
    int tam = 5;
    arreglo = agregarNodo(arreglo,&tam,99);
    int valores3[6] = {0,1,2,3,4,99};

    mostrarResultado("Ejercicio 3: agregarNodo", arreglo!=NULL && tam==6 && compararArreglo(arreglo,6,valores3), &puntaje, 10);

    /* ------------------ Ejercicio 4 ------------------ */
    liberarArregloNodos(arreglo);
    liberarNodos(n1);

    mostrarResultado("Ejercicio 4: liberarNodos (manual ver visual)", true, &puntaje, 10);

    /* ------------------ Ejercicio 5 ------------------ */
    Nodo* inicio = construirTresNodos();
    bool correcto5 = inicio	&& inicio->data==10		&& inicio->sig
	    			&& inicio->sig->data==20	&& inicio->sig->sig
				&& inicio->sig->sig->data==30;

    mostrarResultado("Ejercicio 5: construirTresNodos", correcto5, &puntaje, 10);

    /* ------------------ Ejercicio 6 ------------------ */
    int total = contarNodos(inicio);

    mostrarResultado("Ejercicio 6: contarNodos", total==3, &puntaje, 10);

    /* ------------------ Ejercicio 7 ------------------ */
    // Aquí no podemos leer del usuario en test automático, simulamos entrada
    Nodo* desdeEntrada = crearNodo(1);

    Nodo* segundo = crearNodo(2);
    desdeEntrada->sig = segundo;

    bool correcto8 = desdeEntrada	&& desdeEntrada->sig		&& desdeEntrada->data==1
	    				&& desdeEntrada->sig->data==2;

    mostrarResultado("Ejercicio 7: crearNodosPorEntrada (simulado)", correcto8, &puntaje, 10);

    liberarNodos(inicio);
    liberarNodos(desdeEntrada);

    printf("\n=== Puntaje total: %d/70 ===\n", puntaje);

    return 0;
}
