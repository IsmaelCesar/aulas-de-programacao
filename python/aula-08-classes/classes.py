class Produto():
    
    def __init__(self, preco):
        self.preco = preco

    def aplicar_desconto(self, desconto):
        self.preco -= desconto

class Celular(Produto):
    
    def __init__(self, marca, preco):
        super().__init__(preco)
        self.marca = marca

class Televisao(Produto):
    
    def __init__(self, marca = "", tipo_de_tela="", canal = 0, preco=0.):
        super().__init__(preco)
        self.marca = marca
        self.tipo_de_tela = tipo_de_tela
        self.canal = canal

    def subir_canal(self):
        self.canal += 1
    
    def descer_canal(self):
        self.canal -= 1
        
    def subir_n_canais(self, n):
        self.canal += n
    
    def descer_n_canais(self, n):
        if  (self.canal - n) >= 0:   
            self.canal -= n
        else:
            self.canal = 0
    
    def __str__(self):
        return f"Marca: {self.marca}, tipo_de_tela: {self.tipo_de_tela}, canal: {self.canal}"
        
tv1 = Televisao("LG", "LED", 50, 1000)
tv2 = Televisao("SAMSUNG", "O-LED", 78, 5000)
tv3 = Televisao("GE", "LCD",60, 1500 )
tv3.canal = 200

print("Preco tv1: ", tv1.preco)
tv1.aplicar_desconto(500)
print("Preco tv1: ", tv1.preco)

# print(tv1)
# print(tv2)

# print("Canal tv1: ", tv1.canal, "Marca tv1: ", tv1.marca)
# print("Canal tv2: ", tv2.canal, "Marca tv2: ", tv2.marca)
# print("Canal tv3: ", tv3.canal, "Marca tv3: ", tv3.marca)

# tv1.subir_canal()
# tv1.marca = "SAMSUNG"
# tv2.descer_canal()
# tv3.subir_canal()

# tv1.subir_n_canais(10)
# tv2.descer_n_canais(50)
# tv3.descer_n_canais(90)

# print("Canal tv1: ", tv1.canal)
# print("Canal tv2: ", tv2.canal)
# print("Canal tv3: ", tv3.canal)
