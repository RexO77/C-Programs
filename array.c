#include<stdlib.h>
#include<stdio.h>
int n,a[10];
void create()
{
    int i;
    printf("Enter the Number of elements : \n");
    scanf("%d",&n);
    printf("Enter Array elements :  ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//comment 
    }
}

void display()
{
    int i;
    printf("The Inserted elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void insert()
{
    int pos,ele,i;
    printf("Enter the Element to be Inserted  :");
    scanf("%d",&ele);
    printf("Enter the Postion it needs to be inserted : ");
    scanf("%d",&pos);
    if(pos>=n+1){
        printf("Invalid Position ");
    }
    for(i=n ; i>pos ; i--) {
        a[i]=a[i-1];
    }
    a[pos]=ele;
    n=n+1;
}

void delete()
{
    int pos,i;
    printf("Enter the Positon of the element to be deleted : ");
    scanf("%d",&pos);
    if(pos>=n){
        printf("Invalid Position");
    }
    for(i=pos ; i< n-1 ; i++){
        a[i]=a[i+1];
    }
    n=n-1;
}

void main()
{
    while(1)
    {
        int ch;
        printf("\nHello what do you want to do \n ");
        printf("\n 1.Create an Array \n");
        printf("\n 2.Display The Array \n");
        printf("\n 3.Insert an element in Array \n");
        printf("\n 4.Delete an element in Array\n ");
        printf("\n 5.Exit\n");
        printf("\n Enter Choice :  \n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1 : create();
            break;
        case 2 : display();
            break;
        case 3 : insert();
            break;
        case 4 : delete();
            break;
        case 5 : exit(0);
            break;
        default: printf("Invalid Choice ");
        }
    }
}