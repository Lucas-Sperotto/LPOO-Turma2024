#include <iostream>
#include <string>

using namespace std;
class Pessoa
{
public:
    string nome;
    int idade;
    void dizer_ola()
    {
        cout << "Olá, meu nome é "
            << nome << " e tenho "
            << idade << " anos!"<< endl;
    }
};
int main()
{
    Pessoa p;
    p.nome = "João";
    p.idade = 35;
    p.dizer_ola();
    return 0;
}
