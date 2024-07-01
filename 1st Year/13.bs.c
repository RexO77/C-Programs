//Binary search 
#include<stdio.h>
int main()

{
	int a[100],low,high,mid,found=0;
	int i,n,key;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the array element\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("enter the key\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
		{
			mid=(low+high)/2;
		
			if(key==a[mid])
			{
				found=1;
				break;
			}
				else if(key<a[mid])
				{
					high=mid-1;
				}
			else
			{
				low=mid+1;
			}
		}
				if(found==1)
			{
				printf("key is found at location %d\n",mid+1);
			}
				else
			{
				printf("key is not found\n");
			}
	return 0;
}

