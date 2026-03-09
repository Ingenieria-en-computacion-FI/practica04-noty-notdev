#include <stdio.h>
#include <stdlib.h>

#include "nodo.h"

/* Ejercicio 1 */
Nodo* crearNodo(int _data){
	Nodo* n_nodo = (Nodo*) malloc(sizeof(Nodo));    

	//	Si hay falla en RAM.
	if(!n_nodo) return NULL;

	n_nodo->data = _data;
	n_nodo->sig = NULL;	

	return n_nodo;
}

/* Ejercicio 2 */
Nodo* crearArregloNodos(int n){
	Nodo* arr = (Nodo*) calloc(n, sizeof(Nodo));

	//	Si hay falla en RAM.
	if(!arr) return NULL;

	//	Inicializando los datos (de 0 a n-1).
	Nodo *p = arr;
	while(p < arr + n) {
		p->data = (p - arr);
		(p++)->sig = NULL;
	}

	return arr;
}

/* Ejercicio 3 */
Nodo* agregarNodo(Nodo* arr, int *n, int _data){
	Nodo* n_arr = (Nodo*) realloc(arr, sizeof(Nodo) * (*n + 1));

	//	Si hay falla en RAM.
	if(!n_arr) return arr;

	//	Llenando el nuevo nodo del arreglo.
	(n_arr + *n)->data = _data;
	(n_arr + *n)->sig = NULL;

	*n += 1;

	return n_arr;
}

/* Ejercicio 4 */
void liberarArregloNodos(Nodo* arr){
	if(!arr) return;

	free(arr);
}

void liberarNodos(Nodo* n) {
	if(!n) return;

	Nodo* p = n;
	do{
		Nodo* z = p->sig;
		free(p);
		p = z;
	}while(p);
}

/* Ejercicio 5 */
Nodo* construirTresNodos(){
	Nodo* n1 = (Nodo*) malloc(sizeof(Nodo));
	Nodo* n2 = (Nodo*) malloc(sizeof(Nodo));
	Nodo* n3 = (Nodo*) malloc(sizeof(Nodo));

	//	Si hay falla en RAM.
	if(!n1 || !n2 || !n3) {
		if(n1) free(n1);
		if(n2) free(n2);
		if(n3) free(n3);

		return NULL;
	}

	//	LLenando nodos.
	n1->data = 10;
	n1->sig = n2;
	
	n2->data = 20;
	n2->sig = n3;

	n3->data = 30;
	n3->sig = NULL;

	return n1;
}

/* Ejercicio 6 */
int contarNodos(Nodo* _head){
	int c = 1;

	//	Si no existe el nodo.
	if(!_head) return 0;

	//	Contando nodos.
	Nodo* p = _head;
	while((p = p->sig)) c++;

	return c;
}

/* Ejercicio 7 */
Nodo* crearNodosPorEntrada(){
	Nodo* head = (Nodo*) malloc(sizeof(Nodo));

	if(!head) return NULL;

	//	Leyendo datos.
	Nodo* z = head;
	while(1) {
		int a;
		scanf("%d", &a);

		//	Condicion para salir del bucle.
		if(!(a + 1)) break;

		Nodo* p = (Nodo*) malloc(sizeof(Nodo));

		//	Si hay falla en RAM.
		if(!p) {
			head = z;
			while(!head) {
				p = head;
				head = p->sig;

				free(p);
			}
			free(z);			

			return NULL;
		}

		p->data = a;
		p->sig = NULL;

		head->sig = p;
		head = head->sig;		
	}
	head = z;
	z = z->sig;

	free(head);

	return z;
}

