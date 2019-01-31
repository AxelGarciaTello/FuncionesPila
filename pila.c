/*
  Instituto Politecnico Nacional
  Escuela Superior de C�mputo
  Estructura de datos
  Grupo: 1CV8
  Alumno: Garc�a Tello Axel
  Profesor: Benjam�n Luna Benoso
  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  Cabecera para las funciones de pila
  
  Fecha: 31 de enero de 2019
*/

//Asignaci�n de los tipos de datos a introducir
typedef char TipoDato;
#include "pila.h"

//Funci�n para eliminar una pila
void crearPila(PILA *p){
     p->Cima=-1;
}

//Funci�n para consultar si la pila esta llena
int pilaLlena(PILA p){
    return (p.Cima==TAM-1?1:0);
}

//Funci�n para consultar si la pila esta vacia
int pilaVacia(PILA p){
    return(p.Cima==-1?1:0);
}

//Funci�n para insertar un dato en la pila
void insertarPila(PILA *p, TipoDato x){
     if(pilaLlena(*p)){
                       printf("Error. Pila llena.\n");
                       exit(-1);
     }
     p->Cima=p->Cima+1;
     p->ListaPila[p->Cima]=x;
}

//Funci�n para quitar un dato en la pila
TipoDato quitarPila(PILA *p){
         if(pilaVacia(*p)){
                           printf("Error. Pila vacia.\n");
                           exit(-1);
         }
         TipoDato aux=p->ListaPila[p->Cima];
         p->Cima=p->Cima-1;
}

//Funci�n para ver el dato en la pila
TipoDato cimaPila(PILA p){
         if(pilaVacia(p)){
                          printf("Error. Pila vacia.\n");
                          exit(-1);
         }
         return p.ListaPila[p.Cima];
}

//Funci�n para eliminar la pila
void eliminarPila(PILA *p){
     p->Cima=-1;
}
