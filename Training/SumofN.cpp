#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter The Value of N : ";
    cin>>n;
    for (int i =0; i<=n ; i++){
        sum += i;
    }
    cout<<"Sum is : "<<sum<<endl;
    return 0;
}

