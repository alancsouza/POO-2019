#include <iostream>

class Ponto{
private:
    int x, y;
public:
    Ponto();
    Ponto(int, int); // Construtor sobrecarregado
};

Ponto::Ponto(int x1, int y1){
    x = x1;
    y = y1;
}

Ponto::Ponto(){
    x = 0;
    y = 0;
}

int main(){
    Ponto A, B(3,4);
    Ponto *p = new Ponto(3,4);
    Ponto *p1 = new Ponto;
    Ponto Vpoints[10];
}