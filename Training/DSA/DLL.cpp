#include<iostream>
using namespace std;

class Node {
    public:
    char data;
    Node *next;
    Node *prev;

    Node(char data) {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist {
    public:
    Node *head;
    Linkedlist() {
        this->head = NULL;
    }

    void insertAtHead(char val) {
        Node *newNode = new Node(val);
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode; // Update the head to the new node
    }

    void display() {
        Node *cur = head;
        while (cur != NULL) {
            cout << cur->data << " -> ";
            cur = cur->next;
        }
        cout << "Null" << endl;
    }
};

int main() {
    Linkedlist ll;
    ll.insertAtHead('A');
    ll.insertAtHead('B');
    ll.insertAtHead('C');
    ll.insertAtHead('D');
    ll.insertAtHead('E');
    ll.display();
    return 0;
}