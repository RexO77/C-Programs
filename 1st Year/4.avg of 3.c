//print average of 3 numbers

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float avg;

    printf("Enter The first Number:");
    scanf("%d",&a);
    printf("Enter the second Number:");
    scanf("%d",&b);
    printf("Enter the third Number:");
    scanf("%d",&c);
    avg=(a+b+c)/3;

    printf("Average of three Numbers is: %0.2f",avg);
    

    return 0;
}
