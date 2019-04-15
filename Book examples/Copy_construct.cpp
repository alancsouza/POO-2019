// Copy construct
#include <iostream>
using namespace std;

class Big {
public:
    Big (const Big &X) {cout << "Construtor de copia" << endl;}
    Big (){cout << "Construtor default" << endl;}
    ~Big(){cout << "Destructor" << endl;}

};

Big bigfun(Big b){
    cout << "Função Bigfun" << endl;
    return b;
}

int main(){
    Big B; // Chama construtor default
    Big B3(B); // Chama construtor de cópia
    Big B4 = B3; // chama construtor de cópia
    B = B3; // Não chama nada (atribuição)
    cout << "1" << endl;
    B3 = bigfun(B);
    cout << "2" << endl;
    Big B5 = bigfun(B);
    cout << "3" << endl;
}