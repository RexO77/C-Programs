#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100];
    int i,j,pos,swap;
    printf("Enter The array size ");
    scanf("%d",&n);
    printf("Enter Array Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n-1;i++){
        pos = i ;
        for(j= i+1;j<n;j++){
            if(arr[pos]>arr[j]){
                pos = j;
                }
            if(pos != i){
            swap = arr[i];
            arr[i] = arr[pos];
            arr[pos] = swap;
            }
        }
    }
            for(i=0;i<n;i++){
            printf("%d\t ",arr[i]);
            }
    return 0;
}