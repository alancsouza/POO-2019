/**
 * Lista 1 - questão 2
 * purpose: organize numbers in the selected order
 * 
 */


#include <iostream>

using namespace std;

int main(){

    unsigned int i;
    float a, b, c, maior, menor, meio;

    cout << "Enter the values of i, a, b and c: " << endl;
    cin >> i >> a >> b >> c;

    if (a > b){
        if (a > c){
            maior = a;
            if (b > c){
                meio = b;
                menor = c;
            }
            else {
                meio = c;
                menor = b;
            }
        }
        else {
            maior = c;
            menor = b;
            meio = a;
        }
    }
    else {
        if (b > c) {
            maior = b;
            if (a > c){
                menor = c;
                meio = a;
            }
            else {
                menor = a;
                meio = c;
            }
        }
        else {
            maior = c;
            meio = b;
            menor = a;
        }
    }

    switch(i){
        case (1):
            cout << "Ordem crescente: " << menor << " " << meio << " " << maior << endl; break;
        case (2):
            cout << "Ordem decrescente: " << maior << " " << meio << " " << menor << endl; break;
        case (3):
            cout << "Maior no meio: " << menor << " " << maior << " " << meio << endl; break;    
    }

}
