#include <stdio.h>
#include <stdlib.h>


int main (){
  // TODO(1): Declara dos apuntadores a entero llamados array, array2
  // TODO(2): Declara una variable para indicar cuantos elementos se requieren
  
  printf("¿Cuantos elementos tiene el conjunto?\n");
  // TODO(3): Lee el numero de elementos
  // TODO(4): Usando una llamada a malloc reserva la memoria para array
  
  if (array!=NULL) {
    // TODO(5): Usando un ciclo for inserta los datos en el arreglo
    printf("[ ");
    // TODO(6): Usando un ciclo for imprime la información en el arreglo
    printf("]\n");

    // TODO(7): Asigna a array2, el arreglo duplicando su tamaño usando realloc
     if (array2!=NULL) {
        // TODO(8): Usando un ciclo for inserta los datos faltantes en el arreglo
        printf("[ ");
        // TODO(9): Usando un ciclo for imprime la información en el arreglo
        printf("]\n");
      }
    
    // TODO(10): libera la memoria reservada por realloc
  }
  return 0;
}
