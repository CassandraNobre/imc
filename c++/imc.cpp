#include <iostream>
#include <iomanip>

double calcular_imc(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso = 70;
    double altura = 1.75;
    double imc = calcular_imc(peso, altura);

    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Altura: " << altura << " m" << std::endl;
    std::cout << "IMC: " << std::fixed << std::setprecision(2) << imc << std::endl;

    return 0;
}
