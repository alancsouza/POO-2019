/** Classe Tempo:
 * atributos inteiros: dia, hora, min, seg
 **/

#ifndef TEMPO_H // include guard in order to prevent double inclusion
#define TEMPO_H

class Tempo {
    int dia, hora, min, seg;

public:
    Tempo(int = 0, int = 0, int = 0, int = 0);
    void check_consistencia();
    void soma(Tempo T1, Tempo T2);
    void get();
    void display();
    void add_1_seg();
    void minus_1_seg();
};

#endif