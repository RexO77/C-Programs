//Electricity Bill 
#include<stdio.h>

int main()

{ 
	char Name[100];
	int units;
	float bill;

	printf("Enter your Name : ");
	scanf("%s",Name);
	printf("Enter the Units consumed : ");
	scanf("%d",&units);

// Bill amount if units below 200
	if(units<=200)
		{
			bill=100+(units*0.8);
		}
// Bill amount if units below 300 
			else if(units>=200 && units<=300)
				{
					bill=100+(200*0.8)+((units-200)*0.9);
				}
//Bill amount if units above 300 
				else
					{
						bill=100+(200*0.8)+(100*0.9)+((units-300)*1);
					}
//Bill amount if it crosses 400 units 
	if(bill>400)
	{
		bill=bill+(bill*0.15);
	}
	printf("customer name is %s\n",Name);
	printf("total units consumed is %d\n",units);
	printf("total bill amount is %f\n",bill);
	return 0;
}

