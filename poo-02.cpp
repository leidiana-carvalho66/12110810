#include <iostream>
#include <string>
using namespace std;

class Estudante {
public:
    string nome;
    int idade;


    void mostrar() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }
};

int main() {
    Estudante estudante;


    cout << "Digite o nome do estudante: ";
    getline(cin, estudante.nome);
    cout << "Digite a idade do estudante: ";
    cin >> estudante.idade;

    estudante.mostrar();

    return 0;
}
