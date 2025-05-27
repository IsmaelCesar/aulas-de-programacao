lista = [3, 4, 5, 6, 6, 7, 8, 10, 12]
lista3 = lista
lista2 = lista[2:5]

print("Lista original: ", lista)
print("Lista3: ", lista3)
print("Fatia: ", lista2)

lista2[0] = 7000
lista3[0] = 7000
lista3.append(5000)

print("Lista original: ", lista)
print("Lista3: ", lista3)
print("Fatia: ", lista2)
