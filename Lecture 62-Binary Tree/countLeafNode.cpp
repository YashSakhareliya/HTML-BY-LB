#include <iostream>
using namespace std;
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
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
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data left of "<<data<<endl;
    root->left = implement(root->left);
    cout<<"Enetr the data right of "<<data<<endl;
    root->right = implement(root->right);
    return root;
}
void inorder(Node* root, int &cnt){
    if(root == NULL){
        return;
    }

    inorder(root->left, cnt);
    if(root->left == NULL && root->right == NULL){
        cnt++;
    }
    inorder(root->right, cnt);
}

int main() {
    Node * root = NULL;
    root = implement(root);
    
    int cnt = 0;
    inorder(root,cnt);
    cout<<"Leaf Node Count: "<<cnt<<endl;
    return 0;
}