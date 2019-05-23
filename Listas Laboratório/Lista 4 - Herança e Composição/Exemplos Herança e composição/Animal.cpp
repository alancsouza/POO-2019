#include <iostream>
using namespace std;

class Animal {
protected:
    long quantidade;

public:
    Animal(long qtde): quantidade(qtde){ cout << "Construindo Animal" << endl;}
    ~Animal() { cout << "Apagando Animal" << endl;}
};

class Bovino: public Animal {
protected:
    string raca;

public:
    Bovino(string r, long qtde): Animal(qtde), raca(r) { cout << "Construindo Bovino" << endl;}
    ~Bovino() {cout << "Apagando Bovino" << endl;}
};

class BovinoLeite: public Bovino {
protected:
    long producaoDiaria;

public:
    BovinoLeite(long prod, string r, long qtde): Bovino(r, qtde), producaoDiaria(prod) {cout << "Construindo um Bovino Leiteiro" << endl;}
    ~BovinoLeite(){cout << "Apagando um bovino leiteiro" << endl;}

    void mostrar() {
        cout << endl << "Quantidade de Animais: " << quantidade; // ok! pois quantidade e raca são protected
        cout << endl << "Raça do Animal: " << raca;
        cout << endl << "Produção Diaria: " << producaoDiaria << endl << endl;
    }
};

int main() {
    BovinoLeite vaca(10, "Holandesa", 350);
    vaca.mostrar();
    return 0;
}