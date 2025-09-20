const readline = require('readline');

const RESET = "\x1b[0m";
const PRETO = "\x1b[30m";
const VERMELHO = "\x1b[31m";
const VERDE = "\x1b[32m";
const AMARELO = "\x1b[33m";

function calcularImc(peso, altura) {
  return peso / (altura * altura);
}

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digite sua altura: ', (alturaStr) => {
  const altura = parseFloat(alturaStr);
  rl.question('Digite seu peso: ', (pesoStr) => {
    const peso = parseFloat(pesoStr);

    if (isNaN(altura) || isNaN(peso) || altura <= 0 || peso <= 0) {
      console.log(VERMELHO + '\nDados Invalidos! Altura e peso devem ser maiores que zero.' + RESET);
    } else {
      const imc = calcularImc(peso, altura);
      console.log(`\nIMC: ${imc.toFixed(2)}`);

      if (imc < 17) console.log(VERMELHO + '\nMuito abaixo do peso.' + RESET);
      else if (imc < 18.5) console.log(AMARELO + '\nAbaixo do peso.' + RESET);
      else if (imc < 25.0) console.log(VERDE + '\nPeso normal.' + RESET);
      else if (imc < 30.0) console.log(AMARELO + '\nAcima do peso.' + RESET);
      else if (imc < 35.0) console.log(VERMELHO + '\nObesidade I.' + RESET);
      else if (imc < 40.0) console.log(VERMELHO + '\nObesidade II (severa).' + RESET);
      else console.log(PRETO + '\nObesidade III (morbida).' + RESET);
    }
    rl.close();
  });
});
