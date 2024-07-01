//Prime Number
#include<stdio.h>

 int main()

{
	int n,i,count=0;
	
	printf("Enter the Number :");
	scanf("%d",&n);
	//logic for prime number
	
	for(i=1; i<=n; i++)
		{	
			if(n%i==0)
				{ 
					count++;
				}
		}

			if(count==2)
				{
					printf("%d is a prime number\n",n);
				}

			else
				{
					printf("%d is not a prime number\n",n);
				}
	return 0;
}

