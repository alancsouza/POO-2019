#include <iostream>
using namespace std;

class Ponto2D {
    double x, y;
public:
    Ponto2D(double xx = 0, double yy = 0): x(xx), y(yy){}

    friend ostream& operator<< (ostream &op, const Ponto2D &p);
};

class Ponto3D: public Ponto2D {
    double z;
public:
    Ponto3D(double xx = 0, double yy = 0, double zz = 0): Ponto2D(xx, yy), z(zz){}

    friend ostream& operator<< (ostream &op, const Ponto3D &p);
};

ostream& operator<< (ostream &op, const Ponto2D &p) {
    op << endl;
    op << "x = " << p.x << endl;
    op << "y = " << p.y << endl;
    return op;
}

ostream& operator<< (ostream &op, const Ponto3D &p) {
    Ponto2D aux = p;
    op << aux;
    /*
    op << "x = " << p.x << endl; Error! x is private 
    op << "y = " << p.y << endl; Error! y is private
    */

    op << "z = " << p.z << endl;
    return op;
}

int main() {
    Ponto2D p1;
    Ponto3D p2;
    Ponto3D p3(2, 4.5, 5);
    Ponto2D p4 = p3;

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;

    return 0;
}