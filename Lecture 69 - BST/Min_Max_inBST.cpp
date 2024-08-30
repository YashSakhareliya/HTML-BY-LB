#include <iostream>
#include <queue>
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

Node* buildTree(Node* root, int data){

    // base case

    if(root == NULL){
        // create a new node
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right =  buildTree(root->right, data);
    }

    if(data < root->data){
        root->left = buildTree(root->left, data);
    }

    return root;
}

void createTree(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = buildTree(root,data);
        cin>>data;
    }
}


void BFS(Node* root){
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){

        int size = q.size();

        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        cout<<endl;
    }
}

int MaxVal(Node* root){
    while(root->right != NULL ){
        root=root->right;
    }
    return root->data;
}

int MinVal(Node* root){
    while(root->left != NULL){
        root=root->left;
    }
    return root->data;
}
int main() {
    
    Node* root = NULL;
    createTree(root);

    cout<<"Tree is BFS"<<endl;
    BFS(root);
   

    cout<<"Max value in BST : "<<MaxVal(root)<<endl;
    cout<<"Min value in BST : "<<MinVal(root)<<endl;
}