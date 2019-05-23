#include <iostream>
using namespace std;

class Base {
    int i;

protected:
    int read() const {return i;}
    void set(int ii) {i =  ii;}

public:
    Base(int ii = 0): i(ii) {}
    int value(int m) const {return m*i;}
};

class Derived: private Base {
    int j;
public:
    Derived(int jj = 0): j(jj) {}
    void change(int x) {set (x);}
    void mostra(){cout << read();}
};

int main(){
    Derived A;
    A.mostra();
    
    //cout << A.read() << endl;
}