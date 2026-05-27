#include <stdio.h>

int dividir(int dividendo, int divisor) {
    int quociente = 0;
    int soma = divisor;

    while (soma <= dividendo) {
        soma += divisor;
        quociente++;
    }

    return quociente;
}
