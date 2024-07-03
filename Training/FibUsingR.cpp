#include<iostream>
using namespace std;
int fib(int n){
    if (n==0|n==1){
        return 1;
    }
    if(n!=0){
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n=0;
    cout<<"Enter N value : ";
    cin>>n;
    cout<<"Fibonacci number is : "<<fib(n)<<endl;
    for(int i =0 ;i<=n ;i++){
        cout<<fib(i);
    }
}