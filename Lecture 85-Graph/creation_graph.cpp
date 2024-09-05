#include <iostream>
#include <list>
#include<unordered_map>
using namespace std;

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
int main() {
    int n;
    int m;
    cout<<"Enter the Nodes ";
    cin>>n;
    cout<<"Enter the edge";
    cin>>m;
    graph g;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printGraph();
    return 0;
}