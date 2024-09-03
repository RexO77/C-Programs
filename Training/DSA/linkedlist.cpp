#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
void insertAtHead(int data, Node** head){
    Node* n = new Node(data);
    n->next = *head;
    *head= n;
}

int main(){
    Node *head = NULL;
    insertAtHead(10,head);
    return 0;
}
