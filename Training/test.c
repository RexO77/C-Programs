#include<stdio.h>
//farorial using recursion
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}