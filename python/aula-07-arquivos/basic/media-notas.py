

def main():
    pasta_arquivo = "python/aula-07-arquivos/basic/"
    with open(f"{pasta_arquivo}notas.info", "r") as arquivo:
        valores = arquivo.readline()
    
    lista_valores = list(map(float, valores.split()))
    
    soma = 0
    for lv in lista_valores:
        soma += lv

    print("Media: ", soma / len(lista_valores))


    
if __name__ == "__main__":
    main()