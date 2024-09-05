#include <iostream>
#include <list>
#include<unordered_map>
#include<vector>
using namespace std;

// adjence list
class graph{
    public:
    unordered_map<int, list<int>> g;

    void addEdge(int u, int v, bool direction){

        // 0 -> undirected
        // 1 -> directed
        g[u].push_back(v);

        if(direction == 0){
            g[v].push_back(u);
        }
    }

    void printGraph(){
        for(auto i: g){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }

};
class gVector{
    public:
    vector<vector<int>> g;
    gVector(int node){
        g.resize(node);
    }

    void addEdge(int u, int v){
        g[u].push_back(v);
        g[v].push_back(u);
    }

    void PrintG(){
        
        for(int i=0;i<g.size();i++){
            cout<<i<<"->";
            for(int j=0;j<g[i].size();j++){
                cout<<g[i][j]<<",";
            }
            cout<<endl;
        }
    }

};
int main() {
    int n;
    int m;
    cout<<"Enter the Nodes ";
    cin>>n;
    cout<<"Enter the edge";
    cin>>m;

    graph g; // graph using map and list

    // in vector graph you give node from starting 0,1,2 ect.
    gVector vec(n); // graph using list
    
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        vec.addEdge(u,v); 
        g.addEdge(u,v,0); 
    }
    vec.PrintG(); // print vector graph
    g.printGraph(); // print map and list graph 
    
    return 0;
}