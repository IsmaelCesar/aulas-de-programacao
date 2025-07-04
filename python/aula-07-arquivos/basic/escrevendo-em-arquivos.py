

def main():
    
    
    with open("python/aula-07-arquivos/basic/meu_arquivo.txt", "w") as variavel:
        variavel.write("Esta eh uma informacao que quero escrever\n")
        variavel.write("bla bla bla bla bla \n")
        variavel.write("ble ble ble ble ble \n")


if __name__ == "__main__": 
    main()