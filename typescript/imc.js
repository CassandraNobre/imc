function calcularImc(peso, altura) {
    return peso / (altura * altura);
}
var peso = 70;
var altura = 1.75;
var imc = calcularImc(peso, altura);
console.log("Peso: ".concat(peso, " kg"));
console.log("Altura: ".concat(altura, " m"));
console.log("IMC: ".concat(imc.toFixed(2)));
