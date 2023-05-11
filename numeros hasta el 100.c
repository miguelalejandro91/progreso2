#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[10]; // vector de tamaño 10 para almacenar los números aleatorios
    int i;

    // inicializar el generador de números aleatorios
    srand(time(NULL));

    // generar y almacenar los números aleatorios en el vector
    for (i = 0; i < 10; i++) {
        numeros[i] = rand() % 100; // generar un número aleatorio entre 0 y 99
    }

    // imprimir los números almacenados en el vector
    printf("Los numeros aleatorios generados son:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
