// Copy constructor example 2
#include <iostream>

using namespace std;

class HowMany {
    static int objectCount;
public:
    HowMany() {objectCount++;}
    static void print(const string& msg = ""){
        if(msg.size() != 0) cout << msg << ": ";
        cout << "ObjectCount = " << objectCount <<  endl;
    }
    ~HowMany(){
        objectCount--;
        print("~HowMany()");
    }
};

int HowMany::objectCount = 0;

HowMany f(HowMany x){
    x.print("x argument inside f()");
    return x;
}

int main(){
    HowMany h;
    HowMany::print("After construction of h");
    HowMany h2 = f(h);
    HowMany::print("After call to f()");
}