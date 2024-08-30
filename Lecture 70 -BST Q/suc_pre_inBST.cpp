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

pair<int, int> predecessorSuccessor(Node *root, int key)
{
    
    Node* root1 = root;
    int succ = -1;
    int pre = -1;
    while(root1->data != key){
        
        if(root1->data < key){
            pre = root1->data;
            root1 = root1->right;
        }else{
            succ = root1->data;
            root1 = root1->left;
        }
    }
    

    Node* leftTree = root1->left;
    Node* rightTree = root1->right;

    // succ
    while(rightTree != NULL){
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    // pre
    while(leftTree != NULL){
        pre = leftTree->data;
        leftTree = leftTree->right;
    }

    pair<int, int>p =make_pair(pre, succ);
    return p;




}
int main() {
    
    Node* root = NULL;
    createTree(root);

    cout<<"Tree is BFS"<<endl;
    BFS(root);

    cout<<"Succ and PreSucc";
    pair<int, int> p = predecessorSuccessor(root, 10);
    cout<<p.first<<" and "<<p.second<<endl;
    return 0;
}