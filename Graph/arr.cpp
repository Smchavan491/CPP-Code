#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph {

public:
    //adj is a hash map, where:
    //Each key is a node (like 1, 2, 3...),
    //Each value is a list<int> of connected nodes.
    //This is called an adjacency list representation of a graph.
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction){   //here u and v are two nodes and we have to add edge between them
        //direction -> 0 -> undirected
        //direction -> 1 -> directed

        //create an edge from u to v
        adj[u].push_back(v);

        if(direction==0){
            //create an edge from v to u
            adj[v].push_back(u);
        }

    }

    void printAdjList(){
        for(auto i : adj){
            cout << i.first << "->";
            for(auto j : i.second){
                cout << j << ", ";
            }
            cout<<endl;
        }
    }

};



int main(){
    int n;
    cout<< "Enter number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter number of edges: ";
    cin >> m;

    Graph g;
    for(int i = 0; i<m; i++){   
        int u, v;
        cout << "Enter edge (u v): ";
        cin>> u >> v;
        
        g.addEdge(u, v, 0); // 0 for undirected graph
    }
    //print graph
    g.printAdjList();


    return 0;
}