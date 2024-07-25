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

    cout<<"Enter the data left of "<<data;
    root->left = implement(root->left);
    cout<<"Enetr the data right of "<<data;
    root->right = implement(root->right);
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
int main() {
    Node * root = NULL;
    root = implement(root);

    cout<<"Inorder"<<endl;
    inorder(root);
    cout<<endl;


    cout<<"Preorder"<<endl;
    preorder(root);
    cout<<endl;


    cout<<"Postorder"<<endl;
    postorder(root);
    cout<<endl;


    return 0;
}