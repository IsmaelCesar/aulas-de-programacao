

def main():
    
    variavel = open("python/aula-07-arquivos/meu_arquivo.txt", "w")

    variavel.write("Ola! Bem vindo ao nosso arquivo teste.\nEle sera utilizando puramente para isso: testar.\nBoa sorte!")

    variavel.close()


if __name__ == "__main__": 
    main()