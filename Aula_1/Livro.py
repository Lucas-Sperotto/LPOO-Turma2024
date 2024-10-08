class Livro:
  def __init__(self, titulo, autor, ano):
    self.titulo = titulo
    self.autor = autor
    self.ano = ano
  def exibir(self):
    print(f"Título: {self.titulo}")
    print(f"Autor: {self.autor}")
    print(f"Ano: {self.ano}")

L = Livro("Python Como Programar", "Deitel", 2011)
L.exibir()