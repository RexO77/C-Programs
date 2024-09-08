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
int main(){
    p2(5);
    return 0;
}