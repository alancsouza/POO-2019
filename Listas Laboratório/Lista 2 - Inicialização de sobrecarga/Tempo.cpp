#include "Tempo.h"
#include <iostream>

Tempo::Tempo(int d, int h, int m, int s) {
    dia = d;
    hora = h;
    min = m;
    seg = s;
    check_consistencia();
}

void Tempo::check_consistencia() {
    while(hora >= 24 || min >= 60 || seg >= 60){
        if (seg >= 60) {
            seg -= 60;
            min ++;
        }
        if (min >= 60) {
            min -= 60;
            hora++;
        }
        if (hora >= 24) {
            hora -= 24;
            dia++;
        }
    }
}

void Tempo::soma(Tempo T1, Tempo T2) {
    dia = T1.dia + T2.dia;
    hora = T1.hora + T2.hora;
    min = T1.min + T2.min;
    seg = T1.seg + T2.seg;

    check_consistencia();    
}

void Tempo::get() {
    std::cout << "Entre com os valores de dia, hora, minutos e segundos" << std::endl;
    std::cin >> dia >> hora >> min >> seg;
    std::cout << std::endl;

    check_consistencia();
}

void Tempo::display(){
    std::cout << "Imprimindo objeto tempo: " << std::endl;
    std::cout << "Dia: " << dia << std::endl;
    std::cout << "Hora: " << hora << std::endl;
    std::cout << "Minutos: " << min << std::endl;
    std::cout << "Segundos: " << seg << std::endl;
}

void Tempo::add_1_seg() {
    seg++;
    check_consistencia();
}

void Tempo::minus_1_seg() {
    seg--;
    check_consistencia();
}

