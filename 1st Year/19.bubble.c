//Bubble Sort 
#include<stdio.h>
int main()
{
	int a[100],i,j,temp,n;
	printf("Enter the array size : \n");
	scanf("%d",&n);
	printf("Enter the Array elements : \n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
			for(i=1;i<=n;i++)
			{
				for(j=0;j<n-i;j++)
				{
					if(a[j]>a[j+1])
					{
						temp = a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
	printf("sorted Array\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
