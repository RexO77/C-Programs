//To convert the given character to upper case to lower case and vice versa 

#include <stdio.h>
#include <string.h>

int main()

{
  char s1[100],s2[100],ini;
  int i;
  printf("Enter the lower case character : ");
  scanf("%s",s1);
  //logic for the conversion 
  for (i=0;s1[i]!='\0';i++)
  {
    if(s1[i]>='a' && s1[i]<='z') 
    {
        s1[i]=s1[i]-32;
    }
  }
   printf("The Upper string is : %s",s1);
   for (i=0;s2[i]!='\0';i++)
   {
    if (s2[i]>='A' && s2[i]<='Z')
    {
        s2[i]=s2[i]+32;
    }
   }

   
    
   return 0;
}
