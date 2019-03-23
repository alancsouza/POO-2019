#include <iostream>

using namespace std;

typedef struct{
    double** m;
    int nLinhas;
    int nColunas;
}Matriz;

// inicializa a Matriz X(ls,cs) preenchendo-a com zeros
void inicializaMatriz(Matriz &X, int ls, int cs){
    X.nLinhas = ls;
    X.nColunas = cs;
    X.m = new double*[X.nLinhas];
    for (int i = 0; i < X.nLinhas; i++) {
        X.m[i] = new double[X.nColunas];
        for (int j = 0; j < X.nColunas; j++) {
            X.m[i][j] = 0.0;
        }
    }
}

// imprime o conteudo da Matriz X
void imprimeMatriz(Matriz &X){
    for (int i = 0; i < X.nLinhas; i++) {
        cout << X.m[i][0];
        for (int j = 1; j < X.nColunas; j++) {
            cout << " " << X.m[i][j];
        }
        cout << endl;
    }
}

// desaloca memoria para a Matriz X
void apagaMatriz(Matriz &X){
    cout<< "desalocando memoria para a Matriz" << endl;
    for (int i = 0; i < X.nLinhas; i++) delete [] X.m[i];
    delete [] X.m;
}

// sugestoes:
// 1. implementar uma funcao para preencher a matriz com valores
// fornecidos pelo usuario via entrada padrao ou via arquivo texto

// 2. implementar uma funcao para tornar a matriz transposta

// 3. implementar uma funcao para multiplicar uma matriz por
// um valor constante k



int main()
{
    Matriz A, B;

    cout<<"matrizA:: "<<endl;
    inicializaMatriz(A,2,3);
    imprimeMatriz(A);
    apagaMatriz(A);

    cout << endl <<"matrizB:: "<<endl;
    inicializaMatriz(B,4,4);
    imprimeMatriz(B);
    apagaMatriz(B);

    return 0;
}
