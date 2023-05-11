/*
Los organizadores de un acto electoral solicitan un programa para calcular 
el conteo de los votos. En la eleccion hay 5 candidatos, los cuales se representan
con los valores del 1 al 5, construya un programa en C que permita obtener
el numero de votos de cada candidato. el usuario ingresa los votos de manera desorganizada
el final del ingreso de datos se representa con un cero
*/

#include <stdio.h>

#define NUM_CANDIDATOS 5

int main() {
    int votos[NUM_CANDIDATOS] = {0};  // Inicializamos todos los votos a cero
    int voto;

    printf("Ingrese los votos de manera desorganizada (0 para terminar):\n");

    while (1) {
        printf("Voto: ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;  // Terminar el bucle si se ingresa un cero
        } else if (voto < 1 || voto > NUM_CANDIDATOS) {
            printf("Voto no válido. Ingrese un número entre 1 y %d.\n", NUM_CANDIDATOS);
            continue;  // Continuar con la siguiente iteración del bucle
        }

        votos[voto - 1]++;  // Incrementar el conteo de votos para el candidato correspondiente
    }

    printf("\nResultados del conteo de votos:\n");
    for (int i = 0; i < NUM_CANDIDATOS; i++) {
        printf("Candidato %d: %d votos\n", i + 1, votos[i]);
    }

    return 0;
}

