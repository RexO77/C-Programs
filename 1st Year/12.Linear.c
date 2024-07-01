//Linear Search 
#include<stdio.h>

 int main()

{
	int n,i,flag=0,a[100];
	int key;
	printf("Enter the array size :");
	scanf("%d",&n);
	printf("Enter the array  elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key :");
	scanf("%d",&key);
	
	//Logic for linear search
	
	for(i=0; i<n; i++)
		{
			if(key==a[i])
			{
				flag=1;
				break;
			}
		}
				if(flag==1)
					{
						printf("Key is found in %i \n",i+1);
					}

					else
						{
							printf("key is Invalid\n");
						}
		
	return 0;
}
