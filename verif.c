#include <stdio.h>

int main() {
    int i, termo = 12, sinal = -1, valor = 11;
    printf("Serie: ");
    for(i = 1; i <= 20; i++) {
        if(i % 2 != 0) {
            termo += valor;
            valor += 12;
        } else {
            termo -= valor;
            valor -= 11;

        

        }
        termo *= sinal;
        sinal *= -1;
        printf("%d ", termo);
    }
    return 0;
}