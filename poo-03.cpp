#include <iostream>
using namespace std;

class Utilizador {
private:
    string nome = "leidiana";
    string palavraPasse = "abc246lef564"; 

public:
    
    void set(string nome, string palavraPasse) {
        this->nome = nome; 
        this->palavraPasse = palavraPasse;
    }

    void get() {
        cout << nome << " " << palavraPasse << endl; 
    }
};

int main() {
    Utilizador novo_obj; 

    novo_obj.get(); 
    novo_obj.set("leidiana", "abc246lef564");
    novo_obj.get();

    return 0;
}
