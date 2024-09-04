#include<iostream>
using namespace std;

class Trie{
    public:
    char data;
    Trie* children[26];
    bool isTerminal;

    Trie(char d){
        data = d;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal=false;
    }
};

class BuildTire{
    public:
    Trie* root;
    BuildTire(){
        root = new Trie('\0');
    }

    void insertUntil(Trie* root, string word){
        // Base case

        if(word.length() == 0){
            root->isTerminal=true;
            return;
        }

        int index = word[0] - 'A';
        Trie* child;
        // first case
        // if char is present so go to nexr child
        if(root->children[index] != NULL){
            child = root->children[index];
        }else{
            // not present
            child = new Trie(word[0]);
            root->children[index] = child;

        }
        // recursion
        insertUntil(child,word.substr(1));



    }
    void insert(string word){
        insertUntil(root, word);
    }

    bool searchUntil(Trie* root, string word){
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        Trie* child;

        if(root->children[index] != NULL){
            child = root->children[index];
        }else{
            return false;
        }
        return searchUntil(child,word.substr(1));


    }

    bool search(string word){
        return searchUntil(root, word);
    }

};
int main(){
    BuildTire* root = new BuildTire();

    root->insert("ABCD");

    cout<<"Present or Not Present : "<<root->search("ABC");
    
}