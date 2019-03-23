/** lista 2
 * Matrix in cpp
 */
#include <iostream>

struct Matrix
{
    double** m;
    int lines;
    int cols;
};

void Init_Matrix(Matrix &X, int lines, int cols){
    X.lines = lines;
    X.cols = cols;
    X.m = new double*[X.lines];
    for (int i = 0; i < X.lines; i++){
        X.m[i] = new double[X.cols];
        for (int j = 0; j < X.cols; j++){
            X.m[i][j] = 0.0;
        }
    }
}

void Display_Matrix(Matrix &X){
    for(int i = 0; i < X.lines; i++){
        std::cout << X.m[i][0];
        for(int j = 0; j < X.cols; j++){
            std::cout << " " << X.m[i][j];
        }
        std::cout << std::endl;
    }
}

void Erase_Matrix(Matrix &X){
    std::cout << "Deallocating memory for the matrix" << std::endl;
    for(int i = 0; i < X.lines; i++)
        delete X.m[i];
    delete [] X.m;
}

int main(){
    Matrix A, B;
    std::cout << "Matrix A: " << std::endl;

    Init_Matrix(A, 2, 3);
    Display_Matrix(A);
    Erase_Matrix(A);
    std::cout << std::endl;

    std::cout << "Matrix B: " << std::endl;
    
    Init_Matrix(B, 4, 4);
    Display_Matrix(B);
    Erase_Matrix(B);

    std::cout << std::endl;

    return 0;
}


