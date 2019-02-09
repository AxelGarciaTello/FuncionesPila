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

#include <stdio.h>
#include <stdlib.h>
#define TAM 100

//Esstrutura de pila
typedef struct pila{
        TipoDato ListaPila[TAM];
        int Cima;
} PILA;

//Funciones principales de la pila
void crearPila(PILA *p);
void insertarPila(PILA *p, TipoDato x);
TipoDato quitarPila(PILA *p);
TipoDato cimaPila(PILA p);
int pilaLlena(PILA p);
int pilaVacia(PILA p);
void eliminarPila(PILA *p);
void copiarPila(PILA A, PILA *B);
TipoDato elemento(PILA A, int n);
