//A c program to caluculate if the given number is even or odd

#include<stdio.h>
  int main()
  {
      int n; 
    printf("Enter the Number: ");
    scanf("%d",&n);
    //Logic for even or odd
    if(n%2==0)
   {
   printf("%d is a even number\n",n);
   }
  else 
  {  
     printf("%d is a odd number\n",n);
  }
   return 0;
}
