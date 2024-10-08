class Pessoa:
  def __init__(self, nome, idade):
    self.nome = nome
    self.idade = idade
  def dizer_ola(self):
    print(f"Olá, meu nome é {self.nome} e tenho {self.idade} anos")


p = Pessoa("João", 45)
p.dizer_ola()