#include<iostream>//Danglind pointer Demo using the concept of DMA 
using namespace std;
// int main(){
//     int *ptr = new int;

//     delete ptr;//it is a good practice to use free due to memory leak but in c++ it is automatically handled
//     ptr = NULL;
//     return 0;
// } // namespace std
int main(){
    int i = 50;
    int *ptr;
    int **dptr;
    int ***ddptr;
    ptr = &i;
    dptr = &ptr;
    ddptr = &dptr;
    cout<<i<<*ptr<<**dptr<<***ddptr<<endl<<&ddptr<<endl;
    return 0;
}