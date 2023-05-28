#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Función para convertir una cadena binaria a un número decimal
int binarioADecimal(char *binario) {
    int longitud = strlen(binario);
    int decimal = 0;
    int potencia = 1;

    for (int i = longitud - 1; i >= 0; i--) {
        if (binario[i] == '1')
            decimal += potencia;
        potencia *= 2;
    }

    return decimal;
}

// Función para convertir un número decimal a una cadena hexadecimal
void decimalAHexadecimal(int decimal, char *hexadecimal) {
    sprintf(hexadecimal, "%X", decimal);
}

int main() {
    char direccionIPBinaria[35];  // Dirección IP en formato binario (con puntos)
    char direccionIPDecimal[20];  // Dirección IP en formato decimal (con puntos)
    char direccionIPHexadecimal[11];  // Dirección IP en formato hexadecimal (con puntos)

    // Obtener la dirección IP en binario desde el usuario
    printf("Ingrese la direccion IP en formato binario (con puntos): ");
    fgets(direccionIPBinaria, sizeof(direccionIPBinaria), stdin);
    direccionIPBinaria[strcspn(direccionIPBinaria, "\n")] = '\0';  // Eliminar el salto de línea

    // Dividir la dirección IP en octetos binarios
    char *token = strtok(direccionIPBinaria, ".");
    int octetosBinarios[4];
    int contadorOctetos = 0;

    while (token != NULL) {
        octetosBinarios[contadorOctetos++] = binarioADecimal(token);
        token = strtok(NULL, ".");
    }

    // Convertir los octetos binarios a decimal y hexadecimal, e imprimir el proceso paso a paso
    printf("\nDireccion IP en formato decimal:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d", octetosBinarios[i]);
        if (i < 3)
            printf(".");
    }

    printf("\n\nDireccion IP en formato hexadecimal:\n");
    for (int i = 0; i < 4; i++) {
        decimalAHexadecimal(octetosBinarios[i], direccionIPHexadecimal);
        printf("%s", direccionIPHexadecimal);
        if (i < 3)
            printf(".");
    }

    // Realizar análisis combinatorio
    long combinaciones = pow(2, 32 - contadorOctetos);
    printf("\n\nAnalisis combinatorio:\n");
    printf("Numero de combinaciones posibles: %ld\n", combinaciones);

    return 0;
}




