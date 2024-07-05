//polymorphism demo 
#include <iostream>
using namespace std;
class Addition{
    public:
    void add(int a,int b){
        cout<<"Addition of two numbers is : "<<a+b<<endl;
    }
};
class Subtraction
{
    public:
    void sub(int a,int b){
        cout<<"Subtraction of two numbers is : "<<a-b<<endl;
    }
};
int main(){
    Addition a;
    Subtraction s;
    a.add(10,5);
    s.sub(10,5);
    return 0;
}