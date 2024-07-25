#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* implement(Node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data left of"<<data;
    root->left = implement(root->left);
    cout<<"Enetr the data right of "<<data;
    root->left = implement(root->right);
    return root;
}

int main() {
    Node * root = NULL;
    root = implement(root);
    return 0;
}