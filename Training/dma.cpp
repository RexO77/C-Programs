#include<iostream>
using namespace std;
int main(){
    int *ptr = new int;

    delete ptr;//it is a good practice to use free due to memory leak 
    ptr = NULL;
    return 0;
} // namespace std