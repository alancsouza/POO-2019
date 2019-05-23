#include "Tempo.h"
#include <iostream>

int main(){
    Tempo t, t1(72), t2(90,3), t3(4, 7, 55), t4(45, 30, 56, 65);
    
    /*
    t.display();
    t1.display();
    t2.display();
    t3.display();
    t4.display();
    
   t.soma(t1, t2);
   t.display();
*/
   t.get();
   t.display();

   t3.add_1_seg();
   t3.display();

   t4.minus_1_seg();
   t4.display();
}