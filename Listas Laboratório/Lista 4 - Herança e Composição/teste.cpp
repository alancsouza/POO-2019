#include<iostream>
using namespace std;

class Traveler {
protected:
    string s;
public:
    Traveler(string s1) : s(s1) {};
    Traveler(Traveler &t) {s = t.s;};
    Traveler &operator=(const Traveler &t) {s = t.s; return *this;};
};
class Pager {
    string s;
public:
    Pager(string s1) : s(s1) {};
    Pager(const Pager &p) {s = p.s;};
    Pager &operator=(const Pager &p) {s = p.s; return *this;};
};
class BusinessTraveler : public Traveler{
    Pager p;
public:
    BusinessTraveler() : Traveler("1"), p("1") {};
    BusinessTraveler(const BusinessTraveler &bt) : Traveler(bt.s), p(bt.p) {};
    BusinessTraveler(string s1): Traveler(s1), p(s1) {};
    BusinessTraveler &operator=(const BusinessTraveler &bt){ p=bt.p; s =bt.s; return *this;};
};

int main(){
    BusinessTraveler x;
}