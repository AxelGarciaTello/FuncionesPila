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

/* Implementar un programa que muestre mediante pilas si una palabra es un
palíndromo*/

//Definir el tipo de dato que contendra la pila
typedef char TipoDato;
#include "pila.h"

//Función para determinar si una palabra es un palíndromo o no
int pal(void){
    PILA A,B, Aux;
    char car;
    printf("Ingrese una palabra para verificar si es un palindromo\n");
    crearPila(&A);
    crearPila(&B);
    crearPila(&Aux);
    while((car=getchar())!='\n'){
                                 insertarPila(&A, car);
                                 insertarPila(&B, car);
    }
    while(!pilaVacia(B)){
                         insertarPila(&Aux, quitarPila(&B));
    }
    while(!pilaVacia(A)){
                         TipoDato a,aux;
                         a=quitarPila(&A);
                         aux=quitarPila(&Aux);
                         if(a!=aux){
                                    printf("La palabra no es un palindromo\n");
                                    return 0;
                         }
    }
    printf("La palabra es un palindromo\n");
    return 1;
}

//Ciclo de repetición del programa
void menu(void){
     char continuar;
     do{
          int basura=pal();
          printf("Desea ingresar otra palabra [s/n]\n");
          continuar=getchar();
     }
     while(continuar=='s');
}

//Función main para ejecutar el programa
int main(void){
    menu();
    return 0;
}
