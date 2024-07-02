#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp;
    a = temp;
    b = a;
    temp= b;
}
int main(){
    int a=10 , b=20;
    cout<<"Before Swap : "<<a<<b;
    swap(a,b);
    cout<<"After Swap : "<<a<<b;
    return 0;
}