#include<iostream>
using namespace std;

class A {
public:
    A(){ cout << "Construtor de A" << endl;}
    ~A(){ cout << "Destrutor de A" << endl;}
};

class B {
public:
    B(){ cout << "Construtor de B" << endl;}
    ~B(){ cout << "Destrutor de B" << endl;}
};

class C: public A {
    B b;
public:
    C() { cout << "Construtor de C" << endl;}
    ~C(){ cout << "Destrutor de C" << endl;}
};

int main() {
    cout << "Início main" << endl;
    C c;
    //cout << "Fim main" << endl;
    return 0;
}