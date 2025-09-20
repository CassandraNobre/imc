<?php

define('RESET', "\033[0m");
define('PRETO', "\033[30m");
define('VERMELHO', "\033[31m");
define('VERDE', "\033[32m");
define('AMARELO', "\033[33m");

function calcularImc($peso, $altura) {
    return $peso / ($altura * $altura);
}

$altura = (float)readline('Digite sua altura: ');
$peso = (float)readline('Digite seu peso: ');

if ($altura <= 0 || $peso <= 0) {
    echo VERMELHO . "\nDados Invalidos! Altura e peso devem ser maiores que zero." . RESET . "\n";
} else {
    $imc = calcularImc($peso, $altura);
    echo "\nIMC: " . number_format($imc, 2) . "\n";

    if ($imc < 17) echo VERMELHO . "\nMuito abaixo do peso." . RESET . "\n";
    else if ($imc < 18.5) echo AMARELO . "\nAbaixo do peso." . RESET . "\n";
    else if ($imc < 25.0) echo VERDE . "\nPeso normal." . RESET . "\n";
    else if ($imc < 30.0) echo AMARELO . "\nAcima do peso." . RESET . "\n";
    else if ($imc < 35.0) echo VERMELHO . "\nObesidade I." . RESET . "\n";
    else if ($imc < 40.0) echo VERMELHO . "\nObesidade II (severa)." . RESET . "\n";
    else echo PRETO . "\nObesidade III (morbida)." . RESET . "\n";
}

?>
