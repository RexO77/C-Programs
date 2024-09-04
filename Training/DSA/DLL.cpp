#include<iostream>
using namespace std

void print(int n){
    if(n==0){
        return;
    }
    printf("%d",n%2);
    print(n/2);
}
int main(){
    print(12);
    return 0;
}
