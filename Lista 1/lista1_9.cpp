/** POO lista 1 - questão 9
 * purpose: output of a pointer operation
 */

#include <iostream>

using namespace std;

int main(){
    int mat[4] = {0,10,20,30}, *p, x;
    p = mat;

    // x = *p++; // acessa o conteúdo de p e depois incrementa p
    // x = (*p)++; // Incrementa o conteúdo de p
    // x = *(p++); // acessa o conteúdo de p e depois incrementa p
    // x = *mat++; // não compila
    x = (*mat)++; // acessa o primeiro conteúdo de mat e depois incrementa o conteúdo
    cout << x << " " << *mat << endl;
}
