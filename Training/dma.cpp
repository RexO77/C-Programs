#include<iostream>
using namespace std;
int main(){
    int *ptr = new int;

    delete ptr;
    ptr = NULL;
    return 0;
} // namespace std