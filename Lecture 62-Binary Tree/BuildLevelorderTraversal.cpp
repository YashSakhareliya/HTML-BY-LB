#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};

void buildlevelordertraversal(Node* &root){
    queue<Node*>q;
    int data;
    cout<<"Enter the root data"<<endl;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        // insert left node of data
        cout<<"Enter the left of data "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        // inset when data not -1
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        // insert right node of data
        cout<<"Enter the right data "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        // inset when data not -1
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

void printTree(Node* root){
    if(root == NULL){
        return;
    }

    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
}
int main() {
    
    Node* root = NULL;
    buildlevelordertraversal(root);

    cout<<"Tree is "<<endl;
    printTree(root);
    return 0;
}