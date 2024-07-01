//Perfect Square
#include<stdio.h>
#include<math.h>


 int main()

{
	int n,g;
	float f;
	
	printf("Enter the Number:");
	scanf("%d",&n);
	//logic for perfect square
	
	f=sqrt(n);
	g= (int)f;

	if(f==g)
	{
		printf("It is a perfect sqaure \n");
	}
 	else
		{
			printf("it is not a perfect square \n");
		}
	return 0;
} 
