// Testing output overloading functions
#include <iostream>

int add (int a, int b) {
    int c;
    c = a + b;
    return c;
}

float add (float a, float b) {
    float c;
    c = a + b;
    return c;
}

int main(){
    int soma1;
    float soma2;
    float d = 4.5, e = 3.4;
    soma1 = add(1, 2);
    soma2 = add(d,e);

    std::cout << "Soma 1: " << soma1 << std::endl;
    std::cout << "Soma 2: " << soma2 << std::endl;
}