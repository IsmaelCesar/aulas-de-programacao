

def main():
    arquivo = open("python/aula-07-arquivos/valores2.info", "r")

    valores = arquivo.readline()
    # f1, f2, f3, f4, f5 = map(float, valores.split())
    # print(type(f1), type(f2), type(f3), type(f4), type(f5))
    lista_valores = list(map(float, valores.split()))
    print(lista_valores)

    arquivo.close()

    
if __name__ == "__main__":
    main()