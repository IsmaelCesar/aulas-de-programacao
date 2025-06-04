

def soma_dois(n):
    n = n + 2
    return n

my_function = lambda n: n+2

def imprime_algo():
    print("Esta eh uma mensagem")

x = 10
y = soma_dois(x)
k = imprime_algo() #None
print("Valor de x: ", x)
print("Valor de y: ", y)
print("Valor de k: ", k)

def pesquise(lista , valor):
    for x, e in enumerate(lista):
        if e == valor:
            return x
    return None

valores = [13, 17, 19, 23]
print(pesquise(valores, 19))
print(pesquise(valores, 101))
