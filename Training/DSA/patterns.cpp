#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N value : "<<endl;
    cin>>n;
    for(int i=0  ; i < n; i = i+1){
        cout<<" * ";
        for(int j = i; j<=n ; j= j+1){
            cout<<" * ";
        }cout<<""<<endl;
    }
    return 0;
}