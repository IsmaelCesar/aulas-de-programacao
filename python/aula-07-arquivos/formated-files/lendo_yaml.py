import yaml

PASTA = "python/aula-07-arquivos/formated-files"

def escrevendo_yaml():
    novo_produto = { 
                    "produto": "acerola",
                    "preco": 5.0,
                    "quantidade": 600
                   }
    with open(f"{PASTA}/produtos.yml",'r') as f:
        # não podemos fazer append de qualquer jeito
        # também teremos que sobrescrever
        produtos = yaml.safe_load(f)
    
    produtos["produtos"].append(novo_produto)

    with open(f"{PASTA}/produtos.yml",'w') as f:
        yaml.safe_dump(produtos, f, encoding="utf-8")

def lendo_yaml():
    with open(f"{PASTA}/produtos.yml",'r', encoding="utf-8") as f:
        produtos = yaml.safe_load(f)
        print(produtos)
        print(type(produtos))
        print(produtos['produtos'])
        

if __name__ == "__main__":
    # lendo_yaml()
    escrevendo_yaml()