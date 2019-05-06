//IFNDEF_________________________________________________________________________________________________________________________________________________________________________________
#ifndef employees_H_INCLUDED
#define employees_H_INCLUDED
#endif //employees_H_INCLUDED


//STRUCTS________________________________________________________________________________________________________________________________________________________________________________

typedef struct
{
    int id;
    char description[20];

}eSector;

typedef struct
{
    char fullName[50];
    char sex;
    float salary;
    int fileNumber;
    int state;
    int sectorId;
    eDate birth;

}eEmployee;

//PROTOTIPES_____________________________________________________________________________________________________________________________________________________________________________

/** \brief inicia los campos "estado" del array estructura en valor 0 indicando que ese sitio esta vacio y disponible.
 * \param array[]: es el vector tipo estructura con el que va a trabajar la funcion.
 * \param size: es una variable tipo int que indica el tama�o del array recibido.
 * \return void. */

 void InitializeStates(eEmployee array[], int size);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief muestra los datos de un solo empleado.
 * \param employed: es una variable tipo estructura con la que trabaja la funcion.
 * \param sector: es un array tipo estructura con el que trabaja la funcion.
 * \param sectorSize: es el tama�o del array recibido.
 * \return void. */

void showEmployee (eEmployee employed, eSector sector[], int sectorSize);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief muestra una lista de todos los empleados activos.
 * \param array: es el vector tipo estructura que contiene a todos los empleados activos.
 * \param size: es el tama�o del array antes recibido.
 * \param sector: es un vector tipo estructura relacionado al sector empresarial donde trabaja el empleado.
 * \param sectorSize: es el tama�o del vector sector recibido.
 * \return void.
 */

void showEmployees(eEmployee array[],int size,eSector sector[],int sectorSize);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief muestra el numero de legajo del ultimo empleado registrado.
 * \param employed: es el vector tipo estructura a recorrer.
 * \param size: es el tama�o del vector recibido.
 * \param lastRecord: es la variable donde almacenaremos el ultimo legajo ingresado.
 * \return lastRecord + 1: es el ultimo legajo + 1. */

int incrementalFileNumber (eEmployee employed[], int size, int* lastRecord);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief busca espacio libre en el array recibido para ingresar nueva variable tipo estructura.
 * \param array: es el vector tipo estructura con que el que trabaja la funcion.
 * \param size: es el tama�o del vector antes recibido.
 * \return 0 si hay espacio libre en el array, sino -1. */

int freeState(eEmployee array[],int size);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief busca un empleado por numero de legajo, para saber si existe en el sistema o no.
 * \param array: es el vector tipo estructura a recorrer.
 * \param size: es el tama�o del vector ingresado.
 * \param fileNumber: Nro. de legajo a buscar en el vector.
 * \return indexFile es la ubicacon dele empleado, si vale -1 entonces no existe ese empleado en el sistema.*/

int searchEmployee(eEmployee array[],int size,int fileNumber);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief registra un nuevo empleado y todos sus datos en el sistema.
 * \param array: es el vector tipo estructura donde almacenaremos al nuevo empleado.
 * \param size: es el tama�o del vector antes recibido.
 * \param sector: es el vector de tipo estructura relacionado a los sectores de la empresa.
 * \param sectorSize: es el tama�o del vector sector.
 * \return void. */

void registerEmployee (eEmployee array[], int size, eSector sector[], int sectorSize);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief Da la baja a un registro de empleado activo.
 * \param array: es el vector de tipo estructura con el que trabaja la funcion.
 * \param size: es el tama�o del vector antes recibido.
 * \return void. */

void unsubscribeEmployee(eEmployee array[],int size);
//_______________________________________________________________________________________________________________________________________________________________________________________
/** \brief modifica el registro de un empleado activo.
 * \param array: es el vector de tipo estructura con el que trabaja la funcion.
 * \param size: es el tama�o del vector antes recibido.
 * \return void. */

void modifyRecord (eEmployee array[], int size);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief Ordena de forma ascendente o descendente la lista de empleados activos.
 * \param array: es el vector de tipo estructura con el que trabaja la funcion.
 * \param size: es el tama�o del vector antes recibido.
 * \return void. */

void sortEmployees (eEmployee array[], int size);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief Asocia la descripcion de cada sector de la empresa con un id y lo almacena es una vector char.
 * \param array: es el vector tipo char en que se almacena la informacion ingresada.
 * \param sector: es el vector tipo estructura que almacena los distintos sectores de la empresa.
 * \param sectorSize: es el tama�o del vector sector que es igual a la cantidad de sectores en la empresa.
 * \param id: es un dato de tipo entero que representa el numero con el que se identifica a cada sector.
 * \return void. */

void getSector(char array[],eSector sector[],int sectorSize,int id);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief muestra los sectores de la empresa.
 * \param array: es el vector de tipo estructura donde se almacena la informacion de los empleados.
 * \param size: es el tama�o del vector antes recibido.
 * \param sector: es el vector de tipo estructura que almacena la informacion de los sectores de la empresa.
 * \param sectorSize: es el tama�o del vector sector que equivale a la cantidad de sectores en la empresa.
 * \return void. */

void showSectors (eEmployee array[], int size, eSector sector[], int sectorSize);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief desubscribe a todos los empleados de la empresa y dispone de los lugares ocupados en sistema.
 * \param array: es el vector de tipo estructura donde se almacena la informacion de los empleados.
 * \param size: es el tama�o del vector recibido.
 * \return void */

void cleanDataBase (eEmployee array[], int size);
//_______________________________________________________________________________________________________________________________________________________________________________________

/** \brief pide el ingreso de una fecha y lo almacena en un array tipo estructura eEmployee.
 * \param array: es la variable tipo estructura donde alcenaremos la fecha ingresada.
 * \param typeDate: El tipo de fecha que queremos ingresar (Ej. nacimiento, casamiento, despido, etc.).
 * \param minYear: es el a�o minimo permitido en la fecha a ingresar.
 * \param maxYear: es el a�o maximo permitido en la fecha a ingresar.
 * \return 0 si el usuario esta conforme con la fecha ingresada, -1 si quiere cancelar el proceso. */

/*int employeesDates (eEmployee array[], char* typeDate, int minYear, int maxYear); */ //NO FUNCIONA.
//_______________________________________________________________________________________________________________________________________________________________________________________


