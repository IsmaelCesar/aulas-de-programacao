

def my_function(a,b, imprime_mensagem=True):
    if imprime_mensagem:
        print("Mensagem especial")
    print("a+b", a+b)

def another_function(a,b, my_list=[1,2,4,5]):
    '''
    Esta função recebe dois inteiros uma lista
    '''
    print("lista: ", my_list)
    print("a+b", a+b)

k = 10
j = 15
my_function(k, j, False)
# another_function(k,j, my_list=8927389)
