#include <iostream>
#include <string>

using namespace std;
class Carro
{
public:
    string modelo;
    int ano;
    void ligar()
    {
        cout << "Carro Ligado!" << endl;
    }
};

int main()
{
    Carro C;
    C.modelo = "Polo";
    C.ano = 2005;
    C.ligar();
    return 0;
}
