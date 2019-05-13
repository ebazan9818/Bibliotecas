#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
/*PUNTEROS*/
int main()
{
    int x =21;

    int* p; // declaramos un puntero
printf("Antes: %d\n", x);

    char* j; // ambos son direcciones de memoria
    leerPuntero(&x);
printf("Despues: %d\n", x);
  //  p=&x; // a la variable x pedimos que nos muestre el valor de p

   // printf("%d \n", *p);
    //printf("%x \n", &x); // FORMATO X  es la mascara pra que muestre en formato hexadecimal, %p para que muestre en forma puntero
    //es decir el bloque de memoria donde esta guardado, %o es en octal
//& = OPERADOR DE DIRECCION
//* = OPERADOR DE INDIRECCION
    return 0;
}
int numeros[]= {3, 5, 2, 4, 3};



 // las funciones void no necesitan ser asignadas como valor de una variable





