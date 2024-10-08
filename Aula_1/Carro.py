class Carro:
  def __init__(self, modelo, ano):
    self.modelo = modelo
    self.ano = ano
  def ligar(self):
    print("Carro Ligado!")


c = Carro("Polo", 2005)
c.ligar()