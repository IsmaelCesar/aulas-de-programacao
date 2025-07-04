

def main():
    
    with open("python/aula-07-arquivos/basic/meu_arquivo.txt", "a") as variavel:
        variavel.write("Esta eh uma nova informacao\n")


if __name__ == "__main__": 
    main()