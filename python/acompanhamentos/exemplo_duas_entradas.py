
entrada = input("Digite mais de uma coisa: ")
print(f"Valor da entrada: {entrada}", "Tipo: ", type(entrada))

f1, f2 = entrada.split()
print(f"Valor de f1: {f1}, valor de f2: {f2}")
print(f"Valor de f1: {type(f1)}, Tipo: {type(f2)}")

f1 = float(f1)
f2 = float(f2)
print("Imprimindo novamente:")
print(f"Valor de f1: {f1}, valor de f2: {f2}")
print(f"Valor de f1: {type(f1)}, Tipo: {type(f2)}")