#include <iostream>
#include <string>

using namespace std;

class Livro
{
public:
    string titulo;
    string autor;
    int ano;

    void exibir()
    {
        cout << "titulo: " << titulo << "\nAutor: " << autor << "\nAno: " << ano << endl;

    }
};

int main()
{
    Livro L;
    L.titulo = "C++ Como Programar";
    L.autor = "Deitel";
    L.ano = 2011;
    L.exibir();
    return 0;
}
