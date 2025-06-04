

def my_function(a, b):
    print("Começou my_function")
    return a+1, b+2

def calc(esqd, dirt, op):
    if not isinstance(op, str):
        return "Não eh uma string"
    if op == '+':
        return esqd + dirt
    elif op == '-':
        return esqd - dirt
    elif op == '*':
        return esqd * dirt
    elif op == '/':
        return esqd / dirt

v1, v2 = my_function(4, 50)
print("Valor de v1: ", v1, "Valor de v2:", v2)
print("Tipo de v1: ", type(v1), "Tipo de v2: ", type(v2))
