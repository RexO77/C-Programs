//Taylor Series to find sin(x)
#include<stdio.h>
#include<math.h>
int main()
{
	float  term,val=0,numr,denom,deg,x;
	int i,n;
	printf("Enter the Degree : \n");
	scanf("%f",&deg);
	printf("Enter the Number of terms : \n");
	scanf("%d",&n);
	//Converting Degree into radian 
	x=(deg*3.142)/180;
	numr=x;
	denom=1.0;
	term=numr/denom;

	for (i=1;i<=n;i++)
	{
		val=val+term;
		numr=-numr*x*x;
		denom=denom*(2*i)*(2*i+1);
		term=numr/denom;
	}
	printf("Calculated value of sin(%f) is %f\n",deg,val);
	printf("Calculated value of sin(%f) using bulletin function is %f\n",deg,sin(x));
	return 0;
}

