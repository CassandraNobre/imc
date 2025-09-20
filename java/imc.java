import java.util.Scanner;

public class imc {
    public static final String RESET = "\033[0m";
    public static final String PRETO = "\033[30m";
    public static final String VERMELHO = "\033[31m";
    public static final String VERDE = "\033[32m";
    public static final String AMARELO = "\033[33m";

    public static double calcularImc(double peso, double altura) {
        return peso / (altura * altura);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double altura = 0, peso = 0, imc = 0;

        System.out.print("Digite sua altura: ");
        while (!scanner.hasNextDouble()) {
            System.out.println("Entrada inválida. Por favor, digite um número.");
            System.out.print("Digite sua altura: ");
            scanner.next();
        }
        altura = scanner.nextDouble();

        System.out.print("Digite seu peso: ");
        while (!scanner.hasNextDouble()) {
            System.out.println("Entrada inválida. Por favor, digite um número.");
            System.out.print("Digite seu peso: ");
            scanner.next();
        }
        peso = scanner.nextDouble();

        if ((altura <= 0) || (peso <= 0)) {
            System.out.println(VERMELHO + "\nDados Invalidos! Altura e peso devem ser maiores que zero." + RESET);
        } else {
            imc = calcularImc(peso, altura);

            System.out.printf("\nIMC: %.2f", imc);

            if (imc < 17) System.out.println(VERMELHO + "\nMuito abaixo do peso." + RESET);
            else if (imc < 18.5) System.out.println(AMARELO + "\nAbaixo do peso." + RESET);
            else if (imc < 25.0) System.out.println(VERDE + "\nPeso normal." + RESET);
            else if (imc < 30.0) System.out.println(AMARELO + "\nAcima do peso." + RESET);
            else if (imc < 35.0) System.out.println(VERMELHO + "\nObesidade I." + RESET);
            else if (imc < 40.0) System.out.println(VERMELHO + "\nObesidade II (severa)." + RESET);
            else System.out.println(PRETO + "\nObesidade III (morbida)." + RESET);
        }
        scanner.close();
    }
}