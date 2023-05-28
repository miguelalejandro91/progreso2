#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

long long combinations(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    char ipBinary[40];
    printf("Ingrese la direccion IP en binario con puntos: ");
    fgets(ipBinary, sizeof(ipBinary), stdin);

    int octets[4];
    char* token = strtok(ipBinary, ".");
    int i = 0;
    while (token != NULL) {
        octets[i] = strtol(token, NULL, 2);
        token = strtok(NULL, ".");
        i++;
    }

    printf("Direccion IP en decimal: %d.%d.%d.%d\n", octets[0], octets[1], octets[2], octets[3]);
    printf("Direccion IP en hexadecimal: %02X:%02X:%02X:%02X\n", octets[0], octets[1], octets[2], octets[3]);

    int sum = octets[0] + octets[1] + octets[2] + octets[3];
    long long numCombinations = combinations(sum, 4);
    printf("Numero de combinaciones posibles: %d\n", numCombinations);

    return 0;
}




