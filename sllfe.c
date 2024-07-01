#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void search();
void create_secondll();
void concat();
void insert_front();
void insert_rear();
void delete_front();
void delete_rear();
void stack();
void queue();
struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL,*second=NULL,*last=NULL,*temp;
int main()
{
    int choice;
    while(1)
    {
        printf("-----MENU-----\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Insert front\n");
        printf("4.Insert rear\n");
        printf("5.Delete front\n");
        printf("6.Delete rear\n");
        printf("7.Search\n");
        printf("8.Create second ll\n");
        printf("9.Concat\n");
        printf("10.Stack\n");
        printf("11.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :create();
            break;
            case 2 :display();
            break;
            case 3 :insert_front();
            break;
            case 4 :insert_rear();
            break;
            case 5 :delete_front();
            break;
            case 6 :delete_rear();
            break;
            case 7 :search();
            break;
            case 8 :create_secondll();
            break;
            case 9 :concat();
            break;
            case 10:stack();
            break;
            case 11:queue();
            break;
            case 12 :exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
void create()
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Out of memory\n");
        exit(0);
    }
    printf("Enter the value for the new node\n");
    scanf("%d",&newnode->info);
    if(start==NULL)
    {
        temp=start=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
        temp->next=NULL;
    }
}
void create_secondll()
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Out of memory\n");
        exit(0);
    }
    printf("Enter the value for the new node\n");
    scanf("%d",&newnode->info);
    if(second==NULL)
    {
        temp=second=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
        temp->next=NULL;
    }
}
void display()
{
    struct node*ptr;
    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        ptr=start;
        printf("The elements are\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
void search()
{
    struct node *p;
    int key,count=0;
    printf("Enter the key\n");
    scanf("%d",&key);
    printf("Key is %d\n",key);
    if(start==NULL)
    {
    printf("No data\n");
    }
    else
    {
        p=start;
        while(p!=NULL)
        {
            printf("%d\t",p->info);
            if(key==p->info)
            {
                count++;
                break;
            }
            else
                p=p->next;
        }
        if(count==1)
        {
            printf("\nKey found\n");
        }
        else
        {
            printf("\nKey not found\n");
        }
    }
}
void concat()
{
    struct node *p=start;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=second;
}
void insert_rear()
{
    struct node *cur;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Out of memory\n");
        exit(0);
    }
    printf("Enter the value for the new node\n");
    scanf("%d",&newnode->info);
    cur=start;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->next=NULL;
}
void insert_front()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Out of memory\n");
        exit(0);
    }
    printf("Enter the value for the new node\n");
    scanf("%d",&newnode->info);
    newnode->next=start;
    start=newnode;
}
void delete_front()
{
    struct node *first;
    struct node *ptr;
    first=start;
    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        ptr=first=start;
        ptr=ptr->next;
        start=ptr;
        free(first);
    }
}
void delete_rear()
{
    struct node *prev,*cur;
    prev=cur=start;
    while(cur->next!=NULL)
    {
        prev=cur;
        cur=cur->next;
    }
    prev->next=NULL;
    free(cur);
}
void stack()
{
    int choice;
    while(1)
    {
        printf("-----MENU-----\n");
        printf("1.Insert_front\n2.Delete_front\n3.Display\n4.Exit\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert_front();
            break;
            case 2:delete_front();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("Invalid choice\n");
            break;
        }
    }
}
void queue()
{
    int choice;
    while(1)
    {
        printf("-----MENU-----\n");
        printf("1.Insert_rear\n2.Delete_front\n3.Display\n4.Exit\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert_rear();
            break;
            case 2:delete_front();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("Invalid choice\n");
            break;
        }
        
    }
}