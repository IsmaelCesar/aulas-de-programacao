class Televisao():
    
    def __init__(self, marca = "", tipo_de_tela="", canal = 0):
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

lista_tvs = [
    Televisao("LG", "LED", 50),
    Televisao("SAMSUNG", "O-LED", 120),
    Televisao("GE", "LCD", 50),
]

for tv in lista_tvs:
    print("Marca tv: ", tv.marca, 
          "Tipo tela: ", tv.tipo_de_tela,
          "Canal tv: ", tv.canal)

