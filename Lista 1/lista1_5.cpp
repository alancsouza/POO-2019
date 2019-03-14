/** Lista 1 - questão 5
 * Dado um vetor de 15 números inteiros positivos aleatórios entrados via teclado
(número negativo indica fim da entrada dos dados), faça um programa utilizando a classe template vector para
comprimir o vetor suprimindo as repetições de números vizinhos através da contagem do número de
repetições de cada um da seguinte forma:
Vetor de entrada: 1 1 1 4 1 1 4 4 25 67 67 67 67 2 2
3
Vetor de saída: 3 1 1 4 2 1 2 4 1 25 4 67 2 2
*/

#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
    int cont, i, v;
    vector<int> VetIn, VetOut;

    cout << "Entre com a sequencia de números" <<
    "\nOu digite um número negativo para sair:" << endl;
    cin >> v;

    while(v >= 0){
        VetIn.push_back(v);
        cin >> v;
    }

    i = 0;
    while(i < VetIn.size()){
        v = VetIn[i++];
        cont = 1;
        while(VetIn[i] == v &&  i < VetIn.size()){
            i++;
            cont++;
        }
        VetOut.push_back(cont);
        VetOut.push_back(v);
    }

    for(i = 0; i < VetOut.size(); i++)
        cout << VetOut[i] << " " ;
    cout << endl;
}