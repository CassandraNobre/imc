def calcular_imc(peso, altura):
  return peso / (altura * altura)

peso = 70
altura = 1.75
imc = calcular_imc(peso, altura)

print(f"Peso: {peso} kg")
print(f"Altura: {altura} m")
print(f"IMC: {imc:.2f}")
