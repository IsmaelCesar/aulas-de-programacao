import csv

PASTA = "python/aula-07-arquivos/formated-files"


def escrevendo_dict():
    with open(f"{PASTA}/produtos.csv",'a') as f:
        dict_writer = csv.DictWriter(f, fieldnames=["Nome", "Preco", "Quantidade"])

        novo_produto = {
            "Nome": "mamao",
            "Preco": 4.5,
            "Quantidade": 200
        }
        
        dict_writer.writerow(novo_produto)
        

def lendo_dict(): 
    with open(f"{PASTA}/produtos.csv",'r') as f:
        dict_reader = csv.DictReader(f, fieldnames=["Nome", "Preco", "Quantidade"])
        for valores in dict_reader:
            print(valores)

def escrevendo_valores(): 
    with open(f"{PASTA}/produtos.csv",'a') as f: 
        writer = csv.writer(f, delimiter=',')
        writer.writerow(["acerola", 1.5, 500])
        
def percorrendo_csv():
    with open(f"{PASTA}/produtos.csv",'r+') as f: 
        reader = csv.reader(f, delimiter=',')
        
        for row in reader:
            print(row)

def main(): 
    percorrendo_csv()
    # escrevendo_valores()
    # lendo_dict()
    # escrevendo_dict()

        
if __name__ == "__main__":
    main()