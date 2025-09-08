public class imc {
    public static double calcularImc(double peso, double altura) {
        return peso / (altura * altura);
    }

    public static void main(String[] args) {
        double peso = 70;
        double altura = 1.75;
        double imc = calcularImc(peso, altura);

        System.out.println("Peso: " + peso + " kg");
        System.out.println("Altura: " + altura + " m");
        System.out.printf("IMC: %.2f\n", imc);
    }
}