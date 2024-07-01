//recursive 
#include<stdio.h>
int btod(int n)
{
    if(n==0)
    {
        return n;
    }
    else
    {
        return (n%10)+btod(n/10)*2;
    }
}
int main()
{
    int n;
    printf("Enter the binary value\n");
    scanf("%d",&n);
    printf("dec value of the binary is %d\n",btod(n));
    return 69;
}