

def main():
    
    arquivo = open("python/aula-07-arquivos/meu_arquivo.txt", "r")
    
    valores = arquivo.readlines()
    for v in valores:
        print(v, end="")

    arquivo.close()


if __name__ == "__main__": 
    main()