import json

PASTA = "python/aula-07-arquivos/formated-files"

def escrevendo_json():
    novo_produto = {
                "nome": "acerola",
                "preco": 1.5,
                "quantidade": 500
            }
    with open(f"{PASTA}/produtos.json",'a') as f:
        produtos = json.load(f)
    
    print(produtos)    
    # Não dá para fazer concatenação de informações de
    # qualquer jeito
    

def lendo_json():
    with open(f"{PASTA}/produtos.json",'r') as f:
        produtos = json.load(f)
        print(produtos)
        print(type(produtos))
        
def main():
    # lendo_json()
    escrevendo_json()

if __name__ == "__main__":
    main()
