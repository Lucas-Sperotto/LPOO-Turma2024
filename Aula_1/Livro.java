package lpoo2;

public class Livro {

    public String titulo;
    public String autor;
    public int ano;

    public void exibir() {
        System.out.println("Titulo: " + titulo);
        System.out.println("Autor: " + autor);
        System.out.println("Ano: " + ano);
    }

    public static void main(String[] args) {
        Livro L = new Livro();
        L.titulo = "Java Como Programar";
        L.autor = "Deitel";
        L.ano = 2011;
        L.exibir();
    }
}
