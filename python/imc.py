RESET = "\033[0m"
PRETO = "\033[30m"
VERMELHO = "\033[31m"
VERDE = "\033[32m"
AMARELO = "\033[33m"

def calcular_imc(peso, altura):
  return peso / (altura * altura)

try:
    altura = float(input("Digite sua altura: "))
    peso = float(input("Digite seu peso: "))

    if altura <= 0 or peso <= 0:
        print(VERMELHO + "\nDados Invalidos! Altura e peso devem ser maiores que zero." + RESET)
    else:
        imc = calcular_imc(peso, altura)
        print(f"\nIMC: {imc:.2f}")

        if imc < 17:
            print(VERMELHO + "\nMuito abaixo do peso." + RESET)
        elif imc < 18.5:
            print(AMARELO + "\nAbaixo do peso." + RESET)
        elif imc < 25.0:
            print(VERDE + "\nPeso normal." + RESET)
        elif imc < 30.0:
            print(AMARELO + "\nAcima do peso." + RESET)
        elif imc < 35.0:
            print(VERMELHO + "\nObesidade I." + RESET)
        elif imc < 40.0:
            print(VERMELHO + "\nObesidade II (severa)." + RESET)
        else:
            print(PRETO + "\nObesidade III (morbida)." + RESET)
except ValueError:
    print(VERMELHO + "Entrada inválida. Por favor, digite um número." + RESET)
