function calcularImc(peso, altura) {
  return peso / (altura * altura);
}

const peso = 70;
const altura = 1.75;
const imc = calcularImc(peso, altura);

console.log(`Peso: ${peso} kg`);
console.log(`Altura: ${altura} m`);
console.log(`IMC: ${imc.toFixed(2)}`);
