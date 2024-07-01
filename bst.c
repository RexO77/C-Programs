#include<stdio.h>
#include<stdlib.h>

struct BST
{
    int data;
    struct BST *lchild;
    struct BST *rchild;
};
typedef struct BST* NODE;

NODE create()
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct BST));
    printf("Enter the Data : ");
    scanf("%d",&temp->data);
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}

void insert(NODE root,NODE newnode)
{
    if(newnode->data < root->data){
        if(root->lchild==NULL){
            root->lchild==newnode;
        }
        else{
            insert(root->lchild,newnode);
        }
    }
    if(newnode->data>root->data){
        if(root->rchild==NULL){
            root->rchild==newnode;
        }
        else{
            insert(root->rchild,newnode);
        }
    }
}

void search(NODE root)
{
    int key;
    NODE cur;
    if(root==NULL){
        printf("bst is empty");
        return;
    }
    printf("Enter Elements to be searched :");
    scanf("%d",&key);
    cur = root;
    while(cur!=NULL){
        if(cur->data==key){
            printf("Key is present in BST");
            return;
        }
        if(key<cur->data){
            cur = cur->lchild;
        }
        else{
            cur=cur->rchild;
        }
        printf("The Key element is not found ");
    }
}

void inorder(NODE root)
{
    if(root!=NULL){
        inorder(root->lchild);
        printf("%d",root->data);
        inorder(root->rchild);
    }
}

void preorder(NODE root ){
    if(root!=NULL){
        printf("%d",&root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

void postorder(NODE root){
    if(root!=NULL){
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d",&root->data);
    }
}

void main()
{
    int ch,key,val,i,n;
    NODE root=NULL,newnode;

    while (1)
    {
        printf("\n~~~~BST MENU~~~~");
                        printf("\n1.Create a BST");
                        printf("\n2.BST Traversals: ");
                        printf("\n3.Search");
                        printf("\n4.Exit");
                        printf("\nEnter your choice: ");
                        scanf("%d", &ch);
                        switch(ch)
                        {
                            case 1 : printf("Enter No of Elemnts : ");
                                     scanf("%d",&n);
                                     for(i=1;i<n;i++){
                                        newnode=create();
                                        if(root==NULL){
                                            root=newnode;
                                        }
                                        else{
                                            insert(root,newnode);
                                        }
                                      }
                                break;
                            case 2 : if(root==NULL){
                                printf("Tree Not created ");
                                }
                                else{
                                    printf("Preorder :");
                                    preorder(root);
                                    printf("Inorder : ");
                                    inorder(root);
                                    printf("PostOrder : ");
                                    postorder(root);
                                    }break;

                            case 3 : search(root);break;
                            case 4 : exit(0);break;
                            default: printf("Invalid ");
                        }

    }
}