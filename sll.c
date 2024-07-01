#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};
struct Node *head=NULL;

void create()
{
    struct Node *newnode;
    newnode= (struct Node*)malloc(sizeof(struct Node));

    if(newnode==NULL){
        printf("Out of Memeory");
        exit(0);
    } 

    printf("Enter The value of new Node : ");
    scanf("%d",&newnode->data);

        newnode->next=head;
        head=newnode;
        
}

void display()
{
    struct Node*cur;
    if(head==NULL){
        printf("Stack is empty");
    }
    else {
        cur = head;
        printf("The Stack Elements are ");
        while(cur!=NULL){
            printf("\n|%d|\t\n",cur->data);
            cur = cur->next;
        }
    }
}

void search()
{
    struct Node*cur;
    int key,count=0;
    if(head==NULL){
        printf("Insert Elemnts to Search ");
    }
    cur = head;
    printf("Enter Key Element : ");
    scanf("%d",&key);
    while(cur!=NULL){
        if(key==cur->data){
            count++;
            break;
        }
        else{
             cur=cur->next;
        }
    }
    if(count==1){
        printf("Key is found ");
    }
    else{
        printf("Key is Invalid ");
    }
}

void main()
{
    int ch;
    while (1)
    {
        printf("\n1.Create\n2.Search\n3.Display\n4.Exit\nEnter your choice?");  
        scanf("%d",&ch);  
        switch (ch)
        {
        case 1 : create();
            break;
        case 2 : search();
            break;
        case 3 : display();
            break;
        case 4 : exit(0);
        
        default: printf("Invalid choice");
            break;
        }

    }

}