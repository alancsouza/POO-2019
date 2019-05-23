#include <iostream>

using namespace std;

class Ponto2D
{
private:
    double x, y;
    static int id_obj;

public:
    Ponto2D(double init_x = 0, double init_y = 0): x(init_x), y(init_y){id_obj++;} // constructor
    ~Ponto2D(){id_obj--;}
    double get_x() const {return x;}
    double get_y() const {return y;}
    void set(double new_x, double new_y){x = new_x; y = new_y;}

    void display_coordenadas();
    int get_id() const {return id_obj;}
};

int Ponto2D::id_obj = 0;

void Ponto2D::display_coordenadas()
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
int main()
{

    Ponto2D p1(3.4, 5.7);
    Ponto2D p2(34, 18);
    p1.display_coordenadas();
    int a;
    a = p2.get_id();
    cout << "id = " << a << endl;

}
