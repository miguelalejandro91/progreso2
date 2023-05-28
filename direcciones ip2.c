/*crear un programa en C, que convierta direcciones ip binarias a decimales y hexadecimales
para transformar direcciones ipv4 e ipv6, ademas realizar un analisis convinatorio
del direccionamiento para analizar todas las posibles subredes que posee el direccionamiento*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para convertir una cadena binaria en un número decimal
int binarioADecimal(const char *binario) {
    int decimal = 0;
    int longitud = strlen(binario);

    for (int i = 0; i < longitud; i++) {
        decimal = decimal * 2 + (binario[i] - '0');
    }

    return decimal;
}

// Función para convertir un número decimal en una cadena hexadecimal
char* decimalAHexadecimal(int decimal) {
    char *hexadecimal = (char *)malloc(3 * sizeof(char));
    sprintf(hexadecimal, "%02X", decimal);
    return hexadecimal;
}

int main() {
    char direccionIPBinario[35];
    printf("Ingresa la direccion IP en formato binario (con puntos): ");
    scanf("%s", direccionIPBinario);

    // Dividir la cadena en octetos
    char *octeto = strtok(direccionIPBinario, ".");
    int octetos[4];
    int contador = 0;

    while (octeto != NULL && contador < 4) {
        // Convertir cada octeto de binario a decimal
        octetos[contador] = binarioADecimal(octeto);
        contador++;
        octeto = strtok(NULL, ".");
    }

    // Imprimir dirección IP en decimal
    printf("Direccion IP en decimal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d", octetos[i]);
        if (i < 3) {
            printf(".");
        }
    }
    printf("\n");

    // Imprimir dirección IP en hexadecimal
    printf("Direccion IP en hexadecimal: ");
    for (int i = 0; i < 4; i++) {
        char *hex = decimalAHexadecimal(octetos[i]);
        printf("%s", hex);
        if (i < 3) {
            printf(".");
        }
        free(hex);
    }
    printf("\n");

    // Realizar análisis combinatorio
    unsigned long long combinaciones = 1;
    for (int i = 0; i < 4; i++) {
        combinaciones *= (octetos[i] + 1);
    }

    printf("Numero de combinaciones posibles: %llu\n", combinaciones);

    return 0;
}





