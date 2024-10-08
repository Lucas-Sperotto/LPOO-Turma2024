package lpoo2;


public class Carro {
    public String modelo;
    public int ano;
    void ligar() {
        System.out.println("Carro Ligado!");
    }
    
    public static void main(String[] args) {
        Carro C = new Carro();
        C.modelo = "Polo";
        C.ano = 2005;
        C.ligar();
    }
}
