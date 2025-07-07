import csv

PASTA = "python/aula-07-arquivos/formated-files"


def escrevendo_dict():
    with open(f"{PASTA}/produtos.csv",'a') as f:
        dict_writer = csv.DictWriter(f, fieldnames=["Nome", "Preco", "Quantidade"])

        novos_produtos = [{
                "Nome": "rodo",
                "Preco": 16.99,
                "Quantidade": 40
            },
            {
                "Nome": "agua sanitaria",
                "Preco": 16.99,
                "Quantidade": 40
            }
        ]

        dict_writer.writerows(novos_produtos)
        
#--------

def lendo_dict():
    produtos = []
    with open(f"{PASTA}/produtos.csv",'r') as f:
        dict_reader = csv.DictReader(f, fieldnames=["Nome", "Preco", "Quantidade"])
        for valores in dict_reader:
            produtos.append({
                "Nome": valores["Nome"],
                "Preco": float(valores["Preco"]),
                "Quantidade": int(valores["Quantidade"])
            })

    print(produtos)
#--------

def escrevendo_valores(): 
    with open(f"{PASTA}/produtos.csv",'a') as f: 
        writer = csv.writer(f, delimiter=',')
        writer.writerows([
            ["acerola", 1.5, 500],
            ["banana",15.5 , 500],
            ["mamao", 4.5, 700],
            ["milho", 0.5, 1000]
        ])
#--------


def percorrendo_csv():
    produtos = []
    with open(f"{PASTA}/produtos.csv",'r') as f: 
        reader = csv.reader(f, delimiter=',')
        print(next(reader))
        for row in reader:
            produtos.append([
                row[0],
                float(row[1]),
                int(row[2])
            ])
        
        print(produtos)

if __name__ == "__main__":
    # percorrendo_csv()
    # escrevendo_valores()
    # lendo_dict()
    escrevendo_dict()