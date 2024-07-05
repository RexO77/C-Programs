#include<iostream>
using namespace std;
class Student{
    public:
    string Name;
    int RollNo;

    Student(string name,int rollNo){
        Name=name;
        RollNo=rollNo;
    }
    void printdata(){
        cout<<"Student Name is : "<<Name<<endl;
        cout<<"Roll Number is  : "<<RollNo<<endl;
    }
};
int main(){
    Student s1("Nischal",77);
    Student s2("Harsha",82);
    s1.printdata();
    s2.printdata();
    return 0;
}//constructors type 1.Parametarized 2.Default/Non Parametarized 