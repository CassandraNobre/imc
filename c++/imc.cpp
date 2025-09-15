#include <iostream>
#include <iomanip>
#include <string>
#include <limits> // Necessário para std::numeric_limits
//C:/Users/cassa/imc/c++/imc.exe


// Definindo os códigos de cor ANSI como constantes
const std::string RESET = "\033[0m";
const std::string PRETO = "\033[30m";
const std::string VERMELHO = "\033[31m";
const std::string VERDE = "\033[32m";
const std::string AMARELO = "\033[33m";

double calcular_imc(double peso, double altura) {
    return peso / (altura * altura);
}

int main()
{
    /*CALCULO DO IMC*/
    //Declarar as variaveis
    double altura = 0, peso = 0, imc = 0;

    //receber dados (input do usuario)
    std::cout << "Digite sua altura: ";
    std::cin >> altura;

    // Limpar o buffer de entrada em caso de erro
    while(std::cin.fail()) {
        std::cout << "Entrada inválida. Por favor, digite um número." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Digite sua altura: ";
        std::cin >> altura;
    }

    std::cout << "Digite seu peso: ";
    std::cin >> peso;

    // Limpar o buffer de entrada em caso de erro
    while(std::cin.fail()) {
        std::cout << "Entrada inválida. Por favor, digite um número." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Digite seu peso: ";
        std::cin >> peso;
    }

    //validar os dados
    if ((altura <= 0) || (peso <= 0)){
        std::cout << VERMELHO << "\nDados Invalidos! Altura e peso devem ser maiores que zero." << RESET << std::endl;
    }
    else{
        //processar os dados
        imc = peso / (altura * altura);

        //gerar o resultado
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nIMC: " << imc;

        //analisar o resultado
        if (imc < 17) std::cout << VERMELHO << "\nMuito abaixo do peso." << RESET << std::endl;
        else if (imc < 18.5) std::cout << AMARELO << "\nAbaixo do peso." << RESET << std::endl;
        else if (imc < 25.0) std::cout << VERDE << "\nPeso normal." << RESET << std::endl;
        else if (imc < 30.0) std::cout << AMARELO << "\nAcima do peso." << RESET << std::endl;
        else if (imc < 35.0) std::cout << VERMELHO << "\nObesidade I." << RESET << std::endl;
        else if (imc < 40.0) std::cout << VERMELHO << "\nObesidade II (severa)." << RESET << std::endl;
        else std::cout << PRETO << "\nObesidade III (morbida)." << RESET << std::endl;
    }
    return 0;
}
