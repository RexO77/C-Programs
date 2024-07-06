#include<stdio.h>
#define test(val1,val2 ) val1##val2

int main(){
   
    printf("%d",test(23,44) );
    return 0;
}