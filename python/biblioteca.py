
livros = {"a volta dos que nao foram": 10,
          "Harry Potter: E a pedra matemática": 50,
          "Guerra dos troninhos": 50}


def cadastra_livro():
    nome = input("Digite o nome:")
    quantidade = int(input("Digite a quantidade no estoque:"))
    livros[nome] = quantidade        


def listar_livros():
    
    for l in livros.keys():
        print("Titulo: ", l, "; Quantidade:", livros[l])
        

def menu():
    opcao = -1
    while(opcao != 0):
        print("Digite uma opção:")
        print("1 - Cadastrar livro no estoque")
        print("2 - Listar todos os livros")
        opcao = int(input())
        if opcao == 1:
            cadastra_livro()
        elif opcao == 2:
            listar_livros()
        elif opcao == 0:
            print("SAINDO!")
        else: 
            print("Opcao invalida")
            


if __name__ == "__main__":
    menu()
