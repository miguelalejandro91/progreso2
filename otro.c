#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void binaryToDecimal(char* binaryIP) {
    int octets[4];
    sscanf(binaryIP, "%d.%d.%d.%d", &octets[0], &octets[1], &octets[2], &octets[3]);
    
    printf("Dirección IP en decimal: %d.%d.%d.%d\n", octets[0], octets[1], octets[2], octets[3]);
}

void binaryToHexadecimal(char* binaryIP) {
    int octets[4];
    sscanf(binaryIP, "%d.%d.%d.%d", &octets[0], &octets[1], &octets[2], &octets[3]);
    
    printf("Dirección IP en hexadecimal: %X.%X.%X.%X\n", octets[0], octets[1], octets[2], octets[3]);
}

void analyzeCombinations(char* binaryIP) {
    int numBits = strlen(binaryIP);
    int numOnes = 0;
    
    for (int i = 0; i < numBits; i++) {
        if (binaryIP[i] == '1') {
            numOnes++;
        }
    }
    
    long combinations = pow(2, numOnes) - 1;
    
    printf("Análisis combinatorio:\n");
    printf("Número de bits: %d\n", numBits);
    printf("Número de unos: %d\n", numOnes);
    printf("Número de combinaciones posibles: %ld\n", combinations);
}

int main() {
    char binaryIP[35];
    
    printf("Ingrese la dirección IP en formato binario (con puntos): ");
    scanf("%s", binaryIP);
    
    binaryToDecimal(binaryIP);
    binaryToHexadecimal(binaryIP);
    analyzeCombinations(binaryIP);
    
    return 0;
}

