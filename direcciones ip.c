#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binarioADecimalYHexadecimal(char *ipBinaria) {
    char *token;
    int octetos[4];
    int i = 0;

    // Obtener los octetos de la dirección IP binaria
    token = strtok(ipBinaria, ".");
    while (token != NULL) {
        octetos[i++] = strtol(token, NULL, 2);
        token = strtok(NULL, ".");
    }

    // Imprimir la dirección IP en decimal
    printf("Dirección IP en decimal: %d.%d.%d.%d\n", octetos[0], octetos[1], octetos[2], octetos[3]);

    // Imprimir la dirección IP en hexadecimal
    printf("Dirección IP en hexadecimal: %02X.%02X.%02X.%02X\n", octetos[0], octetos[1], octetos[2], octetos[3]);
}

int main() {
    char ipBinaria[35];

    printf("Ingrese la dirección IP en binario (con puntos): ");
    fgets(ipBinaria, sizeof(ipBinaria), stdin);

    // Eliminar el salto de línea al final de la entrada
    ipBinaria[strcspn(ipBinaria, "\n")] = 0;

    binarioADecimalYHexadecimal(ipBinaria);

    return 0;
}



