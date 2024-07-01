//Palindrome
#include<stdio.h>

 int main()

{
	int n,rem,rev=0,temp;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	temp=n;
	//logic for palindrome 
	while(n!=0)
		{
			rem=n%10;
			n=n/10;			
			rev=rev*10+rem;
			
		}
				if(temp==rev)
					{
						printf("%d is a palindrome\n",temp);
					}
				else
					{
						printf("%d is not a palindrome\n",temp);
					}
	return 0;
}		
