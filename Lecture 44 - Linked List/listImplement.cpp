#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }


};

void InsertAthead(Node* &head, int data){
    Node* newnode = new Node(data);

    newnode->next = head;
    head =newnode;

}

void InsertAttail(Node* &tail, int data){

    Node* newnode = new Node(data);

    tail->next = newnode;
    tail = newnode;

}

void InsertAtmiddle(Node* &head, Node* &tail, int pos, int data){
    Node* valid = head;
    int count = 1;
    while(valid != NULL){
        count++;
        valid = valid->next;
    }
    if(pos>count){
        cout<<"Enter valid position";
        return;
    }

    if(pos==1){
        InsertAthead(head,data);
        return;
    }
    Node* newnode = new Node(data);

    Node* temp = head;
    

    int cnt = 1;
    while(cnt < pos-1){
        cnt++;
        temp = temp->next;
    }
    if(temp->next==nullptr){
        InsertAttail(tail,data);
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;

}

void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

int main() {
    // creating new node first
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next;

    // make a head linked list

    Node* head = node1;
    Node* tail = node1;

    InsertAttail(tail,20);
    InsertAthead(head, 5);
    InsertAtmiddle(head,tail,5,3);
    // InsertAttail(tail,50);
    // InsertAthead(head,0);
    print(head);
    
    return 0;
}