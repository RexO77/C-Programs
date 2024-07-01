//Part-A Programs 
//simulation of a simple calculator 
 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	char op;
	printf("Enter the expresssion: \n");
	scanf("%d %c %d",&a,&op,&b);
	
//Logic for simple calculator

		switch(op)
		{
			//Addition
			case '+' : c=a+b;
				break;

			//subtraction 
			case '-' : c=a-b;
				break;

			//multiplication 
			case '*' : c=a*b;
				break;

			//Division
			case '/' : c=a/b;
				break;

			//Modulus
			case '%' : c=a%b;
				break;

			default : printf("Invalid");
			exit (0);
			break;
		}
	printf("result= %d \n",c);
	return 0;
}
	

