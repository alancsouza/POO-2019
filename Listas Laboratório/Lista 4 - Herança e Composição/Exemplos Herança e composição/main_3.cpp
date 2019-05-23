#include <iostream>
using namespace std;

class Animal {

  protected:
    long quantidade;

  public:
       Animal (long qtde): quantidade(qtde) {
          cout << "Construindo um Animal" << endl;
       }
       ~Animal() {	cout << "Apagando Animal" << endl; }
};

class Bovino : public Animal {

   protected:
    string raca;

   public:
       Bovino (string r, long qtde):Animal(qtde),raca(r) {
           cout << "Construindo um Bovino" << endl;
       }
       ~Bovino() { cout << "Apagando Bovino" << endl; }
};

class BovinoLeite : public Bovino {
   protected:
        long producaoDiaria;

    public:
        BovinoLeite(long prod, string r, long  qtde) : Bovino(r, qtde), producaoDiaria(prod) {
            cout << "Construindo um Bovino leiteiro" << endl;
       }
       ~BovinoLeite() {	cout << "Apagando Bovino leiteiro" << endl; }


        void mostrar() {
            cout << endl << "Quantidade de Animais : " << quantidade;                // OK! pois quantidade, raca sao protected
            cout << endl << "Raca do Animal        : " << raca;
            cout << endl << "Producao Diaria       : " << producaoDiaria << endl << endl;
        }

};


int main()
{
    BovinoLeite vaca(10,"Holandesa",350);
    vaca.mostrar();
    return 0;
}
