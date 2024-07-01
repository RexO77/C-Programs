#include<stdio.h>
#include<stdlib.h>

struct Node
{
    char Id[20],name[25],branch[25],specialization[25];
    struct Node *next;
    struct Node *prev;
};
typedef struct Node* NODE;

NODE first = NULL;
int count=0;

NODE create()
{
    NODE enode;
    enode=(NODE)malloc(sizeof(struct Node));
    if(enode==NULL){
        printf("Out of memory ");
        exit(0);
    }
    printf("Enter The Professor Details : Id ,Name,Branch,Area of Specialization ");
    scanf("%s%s%s%s",enode->Id,enode->name,enode->branch,enode->specialization);
    enode->prev=NULL;
    enode->next=NULL;
    count++;
    return enode;
}

NODE push()
{
    NODE temp;
    temp=create();
    if(first==NULL){
        return temp;
    }
    temp->next=first;
    first->prev=temp;
    return temp;
}

NODE pop()
{
    NODE cur;
    if(first==NULL){
        printf("Underflow ");
        return NULL;
    }
    if(first->next==NULL){
        printf("The professor with ID : %s is deleted ",first->Id);
        free(first);
        count--;
        return NULL;
    }
    cur = first;
    first=first->next;
    cur->next=NULL;
    first->prev=NULL;
    printf("The professor with ID : %s is deleted ",cur->Id);
    free(cur);
    count--;
    return first;
}

void display()
{
    NODE cur;
    int nodeno=1;
    cur = first;
    if(cur==NULL){
        printf("Stack underflow");
    }
    while (cur!=NULL){
        printf("\n\nnodeno : |%d| Id : |%s|\nName : |%s|\nBranch : |%s|\nArea of Specialization : |%s|\n\n",nodeno,cur->Id,cur->name,cur->branch,cur->specialization);
        cur=cur->next;
        nodeno++;
    }printf("the no proff is : %d",count);
}

void main()
{
    int ch;
    while(1){
    printf("\n 1.push\n 2.pop\n 3.Display\n 4.Exit\n Enter Your choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1 : first = push();
        break;
    case 2 : first = pop();break;
    case 3 : display();break;
    case 4 : exit(0);break;
    default: printf("Invalid Choice ");
        break;
    }
    }
}