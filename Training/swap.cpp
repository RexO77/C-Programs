#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp=a;
    a = b;
    b=temp;
}
void swap2(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b =temp;
}
int main(){
    int a=10 , b=20;
    cout<<"Before Swap : "<<a<<b<<endl;
    swap(a,b);
    cout<<"After Swap : "<<a<<b<<endl;
    swap2(&a,&b);
    cout<<"Using Pointer Swap : "<<a<<b<<endl;
    return 0;
}