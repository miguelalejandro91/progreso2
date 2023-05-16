/*Crear un programa en C que permita sumar 2 matrices de la misma dimensión*/

#include <stdio.h>

#define MAX_FILAS 100
#define MAX_COLUMNAS 100
void sumarMatrices(int matriz1[MAX_FILAS][MAX_COLUMNAS], int matriz2[MAX_FILAS][MAX_COLUMNAS], int resultado[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void mostrarMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}