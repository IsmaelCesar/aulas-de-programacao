
my_function = lambda x, y: x**y

def soma2(x):
    global outroValor 
    outroValor = outroValor + 1
    y = x + outroValor
    return y

outroValor = 25
resultado = soma2(100)
print(resultado)