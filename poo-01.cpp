#include <iostream>

using namespace std;

class nomeClasse {

private:
    int valorPrivado;

public:
    int valorPublico;

    void funcaoPublica() {
        cout << "Esta é a minha primeira função" << endl;
    }
}; 

int main() {
    nomeClasse objectoNovo;

    objectoNovo.valorPublico = 10;
    
    objectoNovo.funcaoPublica();

    return 0;
}
