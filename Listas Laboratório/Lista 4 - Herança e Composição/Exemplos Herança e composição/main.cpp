#include <iostream>
using namespace std;

class Ponto2D {

    private:
        double x, y;

    public:

        Ponto2D(double xx=0, double yy=0):x(xx),y(yy) {}

        friend ostream& operator<< (ostream &op, const Ponto2D &p);
};

ostream& operator<< (ostream &op, const Ponto2D &p){
            op << endl;
            op << "x = " << p.x << endl;
            op << "y = " << p.y << endl;
            return op;
}

class Quadrado {

    private:
        Ponto2D p1, p2, p3, p4;

    public:

        Quadrado(double x1=0, double y1=0, double x2=0, double y2=0,
                 double x3=0, double y3=0, double x4=0, double y4=0):p1(x1,y1),p2(x2,y2),p3(x3,y3),p4(x4,y4){}

        Quadrado(Ponto2D pp1, Ponto2D pp2, Ponto2D pp3, Ponto2D pp4):p1(pp1),p2(pp2),p3(pp3),p4(pp4){}

        friend ostream& operator<< (ostream &op, const Quadrado &q);
};

ostream& operator<< (ostream &op, const Quadrado &q){
            op << endl;
            op << "Vertice 1: " << q.p1;
            op << "Vertice 2: " << q.p2;
            op << "Vertice 3: " << q.p3;
            op << "Vertice 4: " << q.p4 << endl;
            return op;
}


int main()
{
    Quadrado q1;
    cout << "Quadrado q1" << q1 << endl;

    Ponto2D p1(0,0), p2(1,0), p3(0,1), p4(1,1);
    Quadrado q2(p1,p2,p3,p4);
    cout << "Quadrado q2" << q2 << endl;

    return 0;
}
