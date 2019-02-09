/*
  Instituto Politecnico Nacional
  Escuela Superior de Cómputo
  Estructura de datos
  Grupo: 1CV8
  Alumno: García Tello Axel
  Profesor: Benjamín Luna Benoso
  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  Cabecera para las funciones de pila
  
  Fecha: 31 de enero de 2019
*/

//Asignación de los tipos de datos a introducir
typedef char TipoDato;
#include "pila.h"

//Función para eliminar una pila
void crearPila(PILA *p){
     p->Cima=-1;
}

//Función para consultar si la pila esta llena
int pilaLlena(PILA p){
    return (p.Cima==TAM-1?1:0);
}

//Función para consultar si la pila esta vacia
int pilaVacia(PILA p){
    return(p.Cima==-1?1:0);
}

//Función para insertar un dato en la pila
void insertarPila(PILA *p, TipoDato x){
     if(pilaLlena(*p)){
		printf("Error. Pila llena.\n");
        exit(-1);
     }
     p->Cima=p->Cima+1;
     p->ListaPila[p->Cima]=x;
}

//Función para quitar un dato en la pila
TipoDato quitarPila(PILA *p){
	if(pilaVacia(*p)){
		printf("Error. Pila vacia.\n");
        exit(-1);
    }
    TipoDato aux=p->ListaPila[p->Cima];
    p->Cima=p->Cima-1;
}

//Función para ver el dato en la pila
TipoDato cimaPila(PILA p){
    if(pilaVacia(p)){
        printf("Error. Pila vacia.\n");
        exit(-1);
    }
    return p.ListaPila[p.Cima];
}

//Función para eliminar la pila
void eliminarPila(PILA *p){
     p->Cima=-1;
}

//Función para copiar el contenido de una pila
void copiarPila(PILA A, PILA *B){
	PILA Aux;
	crearPila(&Aux);
	while(!pilaVacia(A)){
		insertarPila(&Aux, quitarPila(&A));
	}
	while(!pilaVacia(Aux)){
		insertarPila(B, quitarPila(&Aux));
	}
}

//Función para mostrar el n-ésimo elemento
TipoDato elemento(PILA A, int n){
	TipoDato aux;
	int count=0;
	while(!pilaVacia(A)&&count<n){
		aux=quitarPila(&A);
		count++;
	}
	if(count==n){
		return aux;
	}
	else{
		printf("Error\n");
		exit(-1);
	}
}
