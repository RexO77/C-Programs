//Matrix multiplication
#include<stdio.h>
int main()
{
int a[100][100],b[100][100],c[100][100];
int i,j,k;
int m,n,p,q;
printf("Enter the size of the first Matrix :" );
scanf("%d%d",&m,&n);
printf("Enter the size of the Second Matrix :");
scanf("%d%d",&p,&q);
	
	if(n!=p)
	{
		printf("Matrix multiplication is not possible\n");
	}
	else 
	{
		printf("Enter the Values of First matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the Values of Second matrix\n");
				for(i=0;i<p;i++)
				{
					for(j=0;j<q;j++)
					{
						scanf("%d",&b[i][j]);
					}
				}
//Logic for Matrix multiplication 

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=0;
					for(k=0;k<n;k++)
					{
						c[i][j]=c[i][j]+a[i][k]*b[k][j];
					}
			}
		}
	
	printf("product of Two matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}printf("\n");
	}
	
	}
	return 0;
}