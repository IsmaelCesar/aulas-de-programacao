

def main():
    
    with open("python/aula-07-arquivos/basic/meu_arquivo.txt", "r") as arquivo:
        valores = arquivo.readlines()
    
    print(valores)
    


if __name__ == "__main__": 
    main()