#include<iostream>
using namespace std;
void p1(int n){
    for(int i=0 ;i<n;i++){
        for(int j =0; j<n;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p2(int n){
    for(int i= 0 ;i<=n ;i++){
        for(int j=n-i+1 ; j<=n ; j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p3(int n){
    for(int i= 0 ;i<=n ;i++){
        for(int j=n-i+1 ; j<=n ; j++){
            cout<<" "<<i;
        }cout<<endl;
    }
}
void p4(int n){
    for(int i= 0 ;i<=n ;i++){
        for(int j=i+1 ; j<=n ; j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p5(int n){
    for(int i= 1 ;i<=n ;i++){
        for(int j=1 ; j<=i ; j++){
            cout<<"*";
        }cout<<endl;
    }
}
void p6(int n){
    for(int i=0 ;i<=n ;i++){
        for(int j= i+1 ; j<=n ; j++){
            cout<<" "<<j;
        }cout<<endl;
    }
}
void p7(int n){
    for(int i = 0;i<n;i++){
        //space
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j< 2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j = 0;j<n-i-1;j++){
            cout<<"";
        }cout<<endl;
    }
}
int main(){
    p7(5);
    return 0;
}