

def main():
    
    f = open("python/aula-07-arquivos/basic/teste.txt", 'r')
    
    lines = f.readlines()
    
    print(lines)
    
    
    
    f.close()


if __name__ == "__main__": 
    main()