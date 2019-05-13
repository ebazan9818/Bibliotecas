#include <stdio.h>
#include <stdlib.h>

typedef struct{
     int legajo;
     char nombre [20];
     char sexo;
     float sueldo;
    }eEmpleado;


int main()
{
    eEmpleado unEmpleado= {1234,"Juan", 'm', 30000};

    eEmpleado otroEmpleado= {2222,"Anna", 'f', 28000};

    eEmpleado lista[] = {unEmpleado, otroEmpleado};

    for(int i=0;i<2;i++){
        printf("%s\n", (lista+i)->nombre)

    }

    eEmpleado* punteroEmpleado;
    punteroEmpleado = &unEmpleado;

    printf("Legajo: %d\n",unEmpleado.legajo);

    printf("Legajo: %d\n", punteroEmpleado->legajo); //asi accedemos al cmapo de un puntero de una estructura
    printf("ano: %s\n", (*punteroEmpleado).nombre);

    return 0;
}
