/*
#include <stdio.h>
int main() {

int A[10];

A[0] = 10;
A[1] = 34;
A[2] = 56;
A[3] = 78;
A[4] = 50;
A[5] = 60;
A[6] = 7;
A[7] = 8;
A[8] = 19;
A[9] = 100;

for (int i = 0; i <=10; i++){

    printf("%d ", A[i]);

}

return 0;
}*/

#include <stdio.h>

int main() {
    int cantidad, i;
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%d", &cantidad);

    int numeros[cantidad];

    for (i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Los numeros ingresados son: ");

    for (i = 0; i < cantidad; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
