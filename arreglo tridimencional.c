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

}