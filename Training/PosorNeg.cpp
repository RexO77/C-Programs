#include<iostream>//Program to Print whether a number is positive or negative
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    if (n>0){
        cout<<"Positive";
    }
    else if (n<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}