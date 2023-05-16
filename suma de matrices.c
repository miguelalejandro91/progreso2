

/*Crear un programa en C que permita sumar 2 matrices de la misma dimensión*/




#include <stdio.h>


#define MAX_FILAS 100
#define MAX_COLUMNAS 100

// Función para sumar dos matrices
void sumarMatrices(int matriz1[MAX_FILAS][MAX_COLUMNAS], int matriz2[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas) {
    int resultado[MAX_FILAS][MAX_COLUMNAS];
    int i, j;
    
    // Realizar la suma de las matrices
    for (i = 1; i < filas; i++) {
        for (j = 1; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    // Mostrar la matriz resultante
    printf("La matriz resultante de la suma es:\n");
    for (i = 1; i < filas; i++) {
        for (j = 1; j < columnas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[MAX_FILAS][MAX_COLUMNAS], matriz2[MAX_FILAS][MAX_COLUMNAS];
    int filas, columnas;
    int i, j;
    
    // Obtener las dimensiones de las matrices
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);
    
    // Leer los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz:\n");
    for (i = 1; i < filas; i++) {
        for (j = 1; j < columnas; j++) {
            printf("Elemento (%d, %d): ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    // Leer los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matriz:\n");
    for (i = 1; i < filas; i++) {
        for (j = 1; j < columnas; j++) {
            printf("Elemento (%d, %d): ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    // Llamar a la función para sumar las matrices
    sumarMatrices(matriz1, matriz2, filas, columnas);
    
    return 0;
}