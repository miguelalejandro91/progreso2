/* Crear un programa en C que imprima un arreglo 
tridimencional cuyo tamaño sea definido por el 
usuario. El programa inicializa todas las matrices 
en cero, a excepcion de la ultima que se inicializa 
en unos.*/

 #include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z;

    printf("Ingrese el tamaño del arreglo tridimensional (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    int arreglo[x][y][z];

// Inicializar todas las matrices en cero
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                arreglo[i][j][k] = 0;
            }
        }
    }
    // Inicializar la última matriz en unos
    for (int j = 0; j < y; j++) {
        for (int k = 0; k < z; k++) {
            arreglo[x - 1][j][k] = 1;
        }
    }