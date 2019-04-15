// Pointer arithmetic
#include <iostream>

int main (){
    int arrint[5] = {10,2,33,42,51};
    double arrdouble[] = {20, 30, 40};
    int *pta;
    pta = arrint;
    double *ptd = arrdouble;

    for(int i = 0; i < 5; i++)
        std::cout << *pta++ << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < sizeof(arrdouble)/sizeof(double); i++)
        std::cout << *ptd++ << std::endl;
}