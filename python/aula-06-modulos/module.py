import utils


def soma_duas_listas(lista1, lista2):
    
    if len(lista1) != len(lista2):
        return("Erro: As listas são de tamanho diferente")
    nova_lista = []
    for elemento1, elemento2 in zip(lista1, lista2):
        nova_lista.append(elemento1+elemento2)
        print("nova_lista: ",nova_lista)
    return nova_lista

if __name__ == "__main__":
    utils.imprime_frase("Esta eh uma frase muito interessante")

    lista = [11, 12, 13, 14, 15, 16, 17]

    resultado = utils.soma_das_potencias_de_n(lista, 5)
    print("Resultado: ", resultado)

    resultado2 = utils.soma_dos_quadrados(lista)

    print("Valor de resultado2: ", resultado2)

    l1 = [1, 1, 1]
    l2 = [3, 3, 3]

    print("Nova lista: ", soma_duas_listas(l1, l2))

