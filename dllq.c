#include<stdio.h>
#include<stdlib.h>

struct Node
{
    char Id[20],name[25],branch[25],specialization[25];
    struct Node *next;
    struct Node *prev;
};

typedef struct Node *NODE;
NODE first=NULL;
int count=0;

NODE create()
{
    NODE enode;
    enode = (NODE)malloc(sizeof(struct Node));
    if(enode==NULL){
        printf("Out of Memory ");
        exit(0);
    }
    printf("Enter The Professor Details : Id ,Name,Branch,Area of Specialization ");
    scanf("%s%s%s%s",enode->Id,enode->name,enode->branch,enode->specialization);
    enode->prev=NULL;
    enode->next=NULL;
    count++;
    return enode;
}

NODE insert()
{
    NODE temp,cur;
    temp=create();
    if(first==NULL){
        return temp;
    }
    cur = first;
    while(cur->next!=NULL){
        cur = cur->next;
    }
    return first;
}

NODE delete()
{
    NODE cur;
    if(first==NULL){
        printf("queue is empty");
        return NULL;
    }
    if(first->next==NULL){
        printf("The Node with ID : %s is Deleted ",first->Id);
        free(first);
        return NULL;
    }
    cur = first;
    first= first->next;
    cur->next=NULL;
    first->prev=NULL;
    printf("The Node with ID : %s is Deleted ",cur->Id);
    free(cur);
    return first;
}

void display()
{
    NODE cur;
    int nodeno=1;

    if(first==NULL){
        printf("Queue is Empty");
    }
    cur = first;
    while(cur!=NULL){
        printf("\nNode NO:|%d|\nID : |%s|\nName : |%s|\nBranch :|%s|\nArea of Specialization : |%s| ",nodeno,cur->Id,cur->name,cur->branch,cur->specialization);
        cur = cur->next;
        nodeno++;
    }
    printf("Total no of Professors : %d",count);
}

void main()
{
    int ch;
    while(1){
    printf("\n 1.push\n 2.pop\n 3.Display\n 4.Exit\n Enter Your choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1 : first = insert();
        break;
    case 2 : first = delete();break;
    case 3 : display();break;
    case 4 : exit(0);break;
    default: printf("Invalid Choice ");
        break;
    }
    }
}