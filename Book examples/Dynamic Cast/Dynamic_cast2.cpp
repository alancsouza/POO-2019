#include<iostream>

using namespace std;
/*
class A{
public:
    virtual void f(){cout << "A::f()"<< endl;} 
};

class B : public A {
public:
    void f(){cout << "B::f()" << endl;}
};

int main(){
    A a;
    B b;
    a.f();
    b.f();

    A *pA = &a;
    B *pB = &b;
    pA->f();
    pB->f();

    pA = &b;
    pB = dynamic_cast<B*>(&a);
}
 */

class Base {virtual void vf(){}};

class Derived : public Base {};

int main(){
    Base *pBDerived = new Derived;
    Base *pBBase = new Base;
    Derived *pd;

    pd = dynamic_cast<Derived*>(pBDerived);
    if(pd==NULL) cout << "Erro 1" << endl;
    pd = dynamic_cast<Derived*>(pBBase);
    if(pd==NULL) cout << "Erro 2" << endl;

    return 0;
}