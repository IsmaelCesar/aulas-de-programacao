

def main():
    arquivo = open("python/aula-07-arquivos/valores.info", "w")
    
    f1 = 15.6
    f2 = 12.7
    f3 = 6007

    arquivo.write(f"{f1} {f2} {f3}")

    arquivo.close()

    
if __name__ == "__main__":
    main()