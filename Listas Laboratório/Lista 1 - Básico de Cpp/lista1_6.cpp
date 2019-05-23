/** Lista 1 - Questão 6
 * Faça um programa que descomprima o vetor de saída do exercício anterior, gerando o
vetor de entrada correspondente.
Vetor de entrada: 1 1 1 4 1 1 4 4 25 67 67 67 67 2 2
Vetor de saída: 3 1 1 4 2 1 2 4 1 25 4 67 2 2 0 (inserir o 0 no final para indicar
fim)

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int i, j, v;
    vector<int> VetIn, VetOut;

    cout << "Entre com a sequência de números" << endl;
    cout << "Número negativo indica o fim da entrada " << endl;
    cin >> v;

    while(v >= 0){
        VetIn.push_back(v);
        cin >> v;
    }
    i = 0;
    while(i < VetIn.size()){
        v = VetIn[i++];
        for (j = 0; j < v; j++)
            VetOut.push_back(VetIn[i]);
        i++;
    }
    for (i = 0; i < VetOut.size(); i++)
        cout << VetOut[i] << " ";
    cout << endl;

}