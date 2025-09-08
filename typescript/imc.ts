function calcularImc(peso: number, altura: number): number {
  return peso / (altura * altura);
}

const peso: number = 70;
const altura: number = 1.75;
const imc: number = calcularImc(peso, altura);

console.log(`Peso: ${peso} kg`);
console.log(`Altura: ${altura} m`);
console.log(`IMC: ${imc.toFixed(2)}`);
