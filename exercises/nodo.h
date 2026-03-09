#ifndef __NOTY_LIB_NODO__

	/*
	*	¿Por que tabula con espacios?
	*	Eso no se hace [;-;].
	*/

	#define __NOTY_LIB_NODO__

	/* Estructura Nodo */
	struct Nodo {
		int data;
		struct Nodo* sig;
	};
	typedef struct Nodo Nodo;	


	/* Ejercicio 1: Crear un nodo dinámicamente */
	Nodo* crearNodo(int _data);

	/* Ejercicio 2: Crear varios nodos con calloc */
	Nodo* crearArregloNodos(int n);

	/* Ejercicio 3: Agregar un nodo usando realloc */
	Nodo* agregarNodo(Nodo* arr, int *n, int _data);

	/* Ejercicio 4: Liberar memoria de nodos */
	void liberarArregloNodos(Nodo* arr);
	void liberarNodos(Nodo* _head);

	/* Ejercicio 5: Construir nodos enlazados manualmente */
	Nodo* construirTresNodos();

	/* Ejercicio 6: Contar nodos */
	int contarNodos(Nodo* _head);

	/* Ejercicio 7: Crear nodos leyendo números */
	Nodo* crearNodosPorEntrada();

#endif
