#include <iostream>
#include<queue>
using namespace std;

// input 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

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
    root->right = implement(root->right);
    return root;
}
 void levelordertraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }

       
    }
}

int main() {
    Node * root = NULL;
    root = implement(root);

    levelordertraversal(root);
    return 0;
}