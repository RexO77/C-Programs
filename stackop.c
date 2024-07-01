#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int s[MAX_SIZE],top=-1;
int n,i,item;

int overflow(){
    if(top==MAX_SIZE-1){
        return 1;
    }
    return 0;
}

int underflow(){
    if(top==n-1){
        return 1;
    }
    return 0;
}

void push(int item){
    printf("Enter the Element to be Pushed : ");
    scanf("%d",&item);
    if (overflow()){
        printf("Stack OverFlow ");
        return;
    }
    else{
        s[top++];
        s[top] = item;
        }
}

void pop(){
    if(underflow()){
        printf("UnderFlow");
    }
    else {
        printf("The Removed Element is : %d",s[top--]);
    }
}

void display()
{   
    if(underflow()){
        printf("~~~~~Stack Empty~~~~~~~");
        }
    printf("Stack Elemnts are...... \n");
    for(i=top ;i>=0 ;i--){
    printf("|%d|\n",s[i]);
    }
}

void palindrome(){
    printf("Stack Elemnts are...... \n");
    for(i=0 ;i<=top ;i++){
    printf("|%d|\n",s[i]);
    }
}

void main()
{
    while(1)
    {
        int ch;
        printf("\nHello what do you want to do \n ");
        printf("\n 1.Push an Element \n");
        printf("\n 2.Pop an Elemet \n");
        printf("\n 3.Display \n");
        printf("\n 4.Palindrome\n");
        printf("\n 5.Exit\n");
        printf("\n Enter Choice :  \n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1 : push(item);
            break;
        case 2 : pop();
            break;
        case 3 : display();
            break;
        case 4 : palindrome();
            break;
        case 5 : exit(0);
            break;
        default: printf("Invalid Choice ");
        }
    }
}