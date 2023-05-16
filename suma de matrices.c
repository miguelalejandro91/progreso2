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
int main() {
    int matriz1[MAX_FILAS][MAX_COLUMNAS];
    int matriz2[MAX_FILAS][MAX_COLUMNAS];
    int resultado[MAX_FILAS][MAX_COLUMNAS];
    int filas, columnas;

    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    printf("Ingrese los elementos de la primera matriz:\n");
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    sumarMatrices(matriz1, matriz2, resultado, filas, columnas);

    printf("La suma de las matrices es:\n");
    mostrarMatriz(resultado, filas, columnas);

    return 0;
}
