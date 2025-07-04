
PASTA = "python/aula-07-arquivos/formated-files"


def escrevendo_valores():
    # Example: Saving binary data to a file
    produto = {
        "nome": "acerola",
        "preco": 2.5,
        "quantidade": 600
    }

    with open(f"{PASTA}/example.info", "w") as f:
        f.write(produto)


if __name__ == "__name__": 
    escrevendo_valores()