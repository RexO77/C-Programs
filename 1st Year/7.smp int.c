//A c program to caluculate simple intrest 

#include<stdio.h>
  int main()
  {
     float p,t,r,si;
    printf("Enter the principle amount:\n");
    scanf("%f",&p);
    printf("Enter the Time:\n");
    scanf("%f",&t);
    printf("Enter the rate of intrest:\n");
    scanf("%f",&r);
    //Logic for simple interst 
   si=(p*t*r)/100;
  printf("The Simple intrest is : %f\n",si);

 return 0;

  } 
 
