#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//Type 3: Using class

class LinkedList{
    public:
    Node* head;
    LinkedList(){
        this->head=NULL;
    }
    void insertAtHead(int val){     
    Node* n=new Node(val);
    n->next=head;
    head=n;
    }
    void insertAtTail(int val){
        Node* n=new Node(val);
        if(head==NULL){
            insertAtHead(val);
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    void insertAtPos(int pos,int val){
        Node* n=new Node(val);
        Node* temp=head;
        for(int i=1;i<pos;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;

    }
    void display(){
        Node* temp=head;    //No need to allocate memory to temp
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtTail(30);
    ll.insertAtPos(2,50);
    ll.display();

    return 0;

}


/* 
Type 1:with double pointers
void insertAtHead(int val,Node** head){     //double-pointer->because address is passed to the function as parameter and head is a pointer itself
    Node* n=new Node(val);
    n->next=*head;
    *head=n;
}
int main(){
    Node* head=nullptr;
    insertAtHead(10,&head);   //call by reference(because its a function with more than one parameter and return type:void)
    return 0;

}
*/

/*
Type 2: without double pointers(using reference)

void insertAtHead(int val,Node* &head){     
    Node* n=new Node(val);
    n->next=head;
    head=n;
}
int main(){
    Node* head=nullptr;
    insertAtHead(10,head);   
    return 0;

}*/