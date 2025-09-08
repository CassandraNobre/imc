

class Program
{
    static double CalcularImc(double peso, double altura)
    {
        return peso / (altura * altura);
    }

    static void Main(string[] args)
    {
        double peso = 70;
        double altura = 1.75;
        double imc = CalcularImc(peso, altura);

        Console.WriteLine($"Peso: {peso} kg");
        Console.WriteLine($"Altura: {altura} m");
        Console.WriteLine($"IMC: {imc:F2}");
    }
}
  

  

