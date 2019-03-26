// Argumentos default
#include <iostream>

class Ponto{
    private:
    int x, y;
    public:
    Ponto(int = 0, int = 0);
};

Ponto::Ponto(int x1, int y1){
    x = x1;
    y = y1;
}

int main(){
    Ponto A, B(3,4);
    Ponto *p = new Ponto(3,4);
    Ponto *p1 = new Ponto;
    Ponto Vpoints[10];
}