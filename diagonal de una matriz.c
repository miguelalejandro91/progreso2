/* CONSTRUIR UNA MATRIZ QUE EL USUARIO INGRESE LAS DIMENSIONES DE LA MATRIZ
QUE LA MATRIZ INICIALICE EN CEROS Y LA DIAGONAL PRINCIPAL A UNOS E IMPRIMIR 
LA MATRIZ.*/
#include <stdio.h>

#define MAX_DIMENSION 100

int main() {
    int matriz[MAX_DIMENSION][MAX_DIMENSION];
    int dimension;
    int i, j;
    printf("Ingrese la dimensión de la matriz: ");
    scanf("%d", &dimension);
    // Inicializar la matriz en ceros
    for (i = 0; i < dimension; i++) {
        for (j = 0; j < dimension; j++) {
            matriz[i][j] = 0;
        }
    }