#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data){
        this->right=NULL;
        this->data=data;
        this->left=NULL;
    }
};
//dfs traversal using levels
void dfs(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    dfs(root->left);
    dfs(root->right);
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    dfs(root);
    return 0;
}
// Time Complexity: O(n), where n is the number of nodes in the binary tree.
// Space Complexity: O(h), where h is the height of the binary tree.
