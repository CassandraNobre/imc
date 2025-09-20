using System;

class Program
{
    const string RESET = "\u001b[0m";
    const string PRETO = "\u001b[30m";
    const string VERMELHO = "\u001b[31m";
    const string VERDE = "\u001b[32m";
    const string AMARELO = "\u001b[33m";

    static double CalcularImc(double peso, double altura)
    {
        return peso / (altura * altura);
    }

    static void Main(string[] args)
    {
        double altura = 0, peso = 0, imc = 0;

        Console.Write("Digite sua altura: ");
        while (!double.TryParse(Console.ReadLine(), out altura))
        {
            Console.WriteLine("Entrada inválida. Por favor, digite um número.");
            Console.Write("Digite sua altura: ");
        }

        Console.Write("Digite seu peso: ");
        while (!double.TryParse(Console.ReadLine(), out peso))
        {
            Console.WriteLine("Entrada inválida. Por favor, digite um número.");
            Console.Write("Digite seu peso: ");
        }

        if ((altura <= 0) || (peso <= 0))
        {
            Console.WriteLine(VERMELHO + "\nDados Invalidos! Altura e peso devem ser maiores que zero." + RESET);
        }
        else
        {
            imc = CalcularImc(peso, altura);

            Console.WriteLine($"\nIMC: {imc:F2}");

            if (imc < 17) Console.WriteLine(VERMELHO + "\nMuito abaixo do peso." + RESET);
            else if (imc < 18.5) Console.WriteLine(AMARELO + "\nAbaixo do peso." + RESET);
            else if (imc < 25.0) Console.WriteLine(VERDE + "\nPeso normal." + RESET);
            else if (imc < 30.0) Console.WriteLine(AMARELO + "\nAcima do peso." + RESET);
            else if (imc < 35.0) Console.WriteLine(VERMELHO + "\nObesidade I." + RESET);
            else if (imc < 40.0) Console.WriteLine(VERMELHO + "\nObesidade II (severa)." + RESET);
            else Console.WriteLine(PRETO + "\nObesidade III (morbida)." + RESET);
        }
    }
}
