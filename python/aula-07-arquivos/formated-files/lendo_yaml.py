import yaml

PASTA = "python/aula-07-arquivos/formated-files"

def escrevendo_yaml():
    novo_produto = {"produtos": [{ 
                    "produto": "acerola",
                    "preco": 5.0,
                    "quantidade": 600
                   }]}
    with open(f"{PASTA}/produtos.yml",'a') as f:
        # não podemos fazer append de qualquer jeito
        # também teremos que sobrescrever
        yaml.safe_dump(novo_produto, f)


def lendo_yaml():
    with open(f"{PASTA}/produtos.yml",'r') as f:
        produtos = yaml.safe_load(f,)
        print(produtos)
        print(type(produtos))
        print(produtos['produtos'])
        

if __name__ == "__main__":
    lendo_yaml()
    # escrevendo_yaml()