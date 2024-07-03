#include<iostream>
using namespace std ;
int recursion(int n){
    if(n<=1)
        return n;
    return n+recursion(n-1);
    }
int main(){
    int n;
    cout<<"Enter The Value of N : ";
    cin>>n;
    cout<<"Sum is : "<<recursion(n)<<endl;
}