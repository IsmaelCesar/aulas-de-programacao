

def main():
    arquivo = open("python/aula-07-arquivos/basic/valores.info", "r")

    valores = arquivo.readline()
    valores = valores.split()
    print(valores)
    f1 = float(valores[0])
    f2 = float(valores[1])
    f3 = int(valores[2])
    
    print(type(f1), type(f2), type(f3))

    arquivo.close()

    
if __name__ == "__main__":
    main()