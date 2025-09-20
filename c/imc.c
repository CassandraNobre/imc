#include <stdio.h>

// Definindo os códigos de cor ANSI como constantes
const char* RESET = "\033[0m";
const char* PRETO = "\033[30m";
const char* VERMELHO = "\033[31m";
const char* VERDE = "\033[32m";
const char* AMARELO = "\033[33m";

float calcular_imc(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    /*CALCULO DO IMC*/
    //Declarar as variaveis
    float altura = 0, peso = 0, imc = 0;

    //receber dados (input do usuario)
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    //validar os dados
    if ((altura <= 0) || (peso <= 0)) {
        printf("%s\nDados Invalidos! Altura e peso devem ser maiores que zero.%s\n", VERMELHO, RESET);
    }
    else {
        //processar os dados
        imc = peso / (altura * altura);

        //gerar o resultado
        printf("\nIMC: %.2f", imc);

        //analisar o resultado
        if (imc < 17) printf("%s\nMuito abaixo do peso.%s\n", VERMELHO, RESET);
        else if (imc < 18.5) printf("%s\nAbaixo do peso.%s\n", AMARELO, RESET);
        else if (imc < 25.0) printf("%s\nPeso normal.%s\n", VERDE, RESET);
        else if (imc < 30.0) printf("%s\nAcima do peso.%s\n", AMARELO, RESET);
        else if (imc < 35.0) printf("%s\nObesidade I.%s\n", VERMELHO, RESET);
        else if (imc < 40.0) printf("%s\nObesidade II (severa).%s\n", VERMELHO, RESET);
        else printf("%s\nObesidade III (morbida).%s\n", PRETO, RESET);
    }
    return 0;
}
