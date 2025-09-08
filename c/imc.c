#include <stdio.h>

float calcular_imc(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso = 70;
    float altura = 1.75;
    float imc = calcular_imc(peso, altura);

    printf("Peso: %.2f kg\n", peso);
    printf("Altura: %.2f m\n", altura);
    printf("IMC: %.2f\n", imc);

    return 0;
}
