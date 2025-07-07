import json

PASTA = "python/aula-07-arquivos/formated-files"

def escrevendo_json():
    novo_produto = {
                "nome": "acerola",
                "preco": 1.5,
                "quantidade": 500
            }
    with open(f"{PASTA}/produtos.json",'r') as f:
        produtos = json.load(f)

    print(produtos)
    produtos["produtos"].append(novo_produto)
    # Não dá para fazer concatenação de informações de
    # qualquer jeito. Temos que sobreescrever valores
    with open(f"{PASTA}/produtos.json",'w') as f:
        json.dump(produtos, f, ensure_ascii=False, indent=4)

def lendo_json():
    with open(f"{PASTA}/produtos.json",'r', encoding="utf-8") as f:
        produtos = json.load(f)
        print(produtos)
        print(type(produtos))
        print(produtos["produtos"])

if __name__ == "__main__":
    # lendo_json()
    escrevendo_json()
