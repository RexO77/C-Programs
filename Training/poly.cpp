#include<iostream>
using namespace std;
//runtime polymorphism Demo using virtual function
class Mom{
    public:
    void cook(){
        cout << "Indian" << endl;
    }
};

class Daughter : Mom{
    public:
    void cook(){
        cout << "Italian" << endl;
    }
};

int main(){
    Mom m;
    Daughter d;

    m.cook();
    d.cook();
}