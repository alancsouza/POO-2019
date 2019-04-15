// Static member function
#include <iostream>
using namespace std;

class Ponto {
    int x, y;
    static int cont;
public:
    Ponto(){cont ++;}
    ~Ponto();
    static void mostra (){
        cout << cont << endl;
    }
};

int Ponto::cont = 0;
Ponto::~Ponto(){
    cout << "Destruindo ponto " << cont << endl;
    cont--;
}

int main(){
    Ponto::mostra(); // função static pode ser chamada sem objeto
    cout << "Teste" << endl;
    Ponto p1;
    p1.mostra();
    {
        Ponto p2;
        p2.mostra();
    }
    Ponto p2;
    p2.mostra();
    return 0;
}