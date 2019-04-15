// Dynamic allocation
#include <iostream>
using namespace std;

int main(){
    const int tam = 10;
    int *pti = new int; // aloca 1 inteiro apontado por pti
    *pti = 5;

    double *ptd = new double[tam];

    for(int i = 0; i < tam; i++)
        ptd[i] = 5.*i;

    cout << "pti: " << pti << endl << "conteudo: " << *pti << endl;
    cout << "ptd: " << ptd << endl << "Conteudo: " << endl;
    
    for(int i = 0; i < tam; i++)
        cout << ptd[i] << endl;
    
    delete[] ptd;
    delete pti;
}
