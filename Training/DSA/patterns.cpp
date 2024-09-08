#include<iostream>
using namespace std;
void p1(int n){
    for(int i=0 ;i<n;i++){
        for(int j =0; j<n;j++){
            cout<<" * ";
        }cout<<endl;
    }
}
int main(){
    p1(7);
    return 0;
}