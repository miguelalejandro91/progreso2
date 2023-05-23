/* Construir un programa en C, en donde el usuario 
defina las dimensiones de una matriz, el programa llena
la matriz con numeros aleatorios entre cero y cien, y 
luego calcule la matriz transpuesta. El programa debe 
imprimir la matriz original y la matriz transpuesta*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar números aleatorios entre 0 y 100
int generarNumeroAleatorio() {
    return rand() % 101;
}