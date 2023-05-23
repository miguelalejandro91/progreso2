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


// Función para imprimir una matriz
void imprimirMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


// Función para calcular la matriz transpuesta
void calcularMatrizTranspuesta(int** matriz, int filas, int columnas) {
    int** transpuesta = (int**)malloc(columnas * sizeof(int*));

    for (int i = 0; i < columnas; i++) {
        transpuesta[i] = (int*)malloc(filas * sizeof(int));
        for (int j = 0; j < filas; j++) {
            transpuesta[i][j] = matriz[j][i];
        }
    }

    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(transpuesta, columnas, filas);


    // Liberar memoria de la matriz transpuesta
    for (int i = 0; i < columnas; i++) {
        free(transpuesta[i]);
    }
    free(transpuesta);


}
int main() {
    int filas, columnas;

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);


    // Crear la matriz
    int** matriz = (int**)malloc(filas * sizeof(int*));
    