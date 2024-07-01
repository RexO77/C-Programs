//Quadratic Equation 
#include<stdio.h>
#include<math.h>
int main()
{
	float a , b , c , d;
	float r1,r2;
	printf("enter the values of a,b and c\n");
	scanf("%f%f%f" ,&a , &b , &c);
	d=b*b-4*a*c;
	//logic for first condition
		if (d==0)
		{
			printf("roots are real and equal\n");
			r1=-b/(2*a);
			r2=r1;
			printf("root 1 is : %f \n" , r1);
			printf("root 2 is : %f \n" , r2);
		}
		//logic for second condition
			else if (d>0)
			{
				printf("the roots are real and different \n");
				r1=b+sqrt(d)/(2*a);
				r2=b-sqrt(d)/(2*a);
				printf("root1 is :  %f\n" , r1);
				printf("root2 is : %f\n" , r2);
			}
				//logic for third condition 
				else
				{
					printf("the roots are complex\n");
					r1=b/(2*a);
					r2=sqrt(fabs(d)/(2*a));
					printf("root1 is :  %f-i%f \n" ,r1,r2);
					printf("root2 is :  %f+i%f \n" ,r1,r2);
				}
	return 0;
}
