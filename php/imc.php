<?php

function calcularImc($peso, $altura) {
    return $peso / ($altura * $altura);
}

$peso = 70;
$altura = 1.75;
$imc = calcularImc($peso, $altura);

echo "Peso: " . $peso . " kg\n";
echo "Altura: " . $altura . " m\n";
echo "IMC: " . number_format($imc, 2) . "\n";

?>
