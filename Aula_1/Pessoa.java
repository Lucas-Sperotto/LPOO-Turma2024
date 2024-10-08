package lpoo2;


public class Pessoa {

    public String nome;
    public int idade;

    public void dizerOla() {
        System.out.println("Olá,  meu nome é " 
                + nome + " e tenho " 
                + idade + " anos");
    }

    public static void main(String[] args) {
        Pessoa p = new Pessoa();
        p.nome = "João";
        p.idade = 25;
        p.dizerOla();
    }
}

