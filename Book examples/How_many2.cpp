// Object counter using copy constructor and static member functions and atributes
#include <iostream>
#include <string>

using namespace std;

class HowMany2{
    string name;
    static int objectCount;
public:
    HowMany2(const string& id = ""): name(id){
        ++objectCount;
        print("HowMany2()");
    }
    ~HowMany2(){
        --objectCount;
        print("HowMany2()");
    }

    // The copy constructor:
    HowMany2(const HowMany2& h):name(h.name){
        name += " copy";
        ++objectCount;
        print("HowMany2(const HowMany2&)");
    }
    void print(const string& msg = "") const{
        if(msg.size() != 0)
            cout << msg << " of " << name << ": " << "objectCount = " << objectCount << endl;
    }
};

int HowMany2::objectCount = 0;

HowMany2 f(HowMany2 x){
    x.print("x argument inside f()");
    cout << "Returning from f()" << endl;
    return x;
}

int main(){
    HowMany2 h("h");
    cout << "Entering f()" << endl;
    HowMany2 h2 = f(h);
    h2.print("h2 after call to f()");
    cout << "Call f(), no return value" << endl;
    f(h);
    cout << "After call to f()" << endl;
}
