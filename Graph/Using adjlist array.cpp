#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph {
    int v;
    list<int> *l; //creating a list

public :
    //creating a cosntructor
    Graph(int v){
        this->v=v;
        l = new list<int>[v];
    }
    //This function adds an edge to graph(undirected graph)
    void addEdge(int u, int v){
        l[u].push_back(v);  //add v to u's list
        l[v].push_back(u);  //add u to v's list
}
    //This function prints the graph
    void display(){
        for(int i=0; i<v; i++){
            cout<<i<<"->";
            for(auto v : l[i]){
                cout << v << " ";
            }
            cout<<endl;
    }
}
};

/*This code creates a graph with n vertices,
Reads e edges from the user,
Adds each edge to the graph, 
Finally prints the graph’s adjacency list.*/

int main(){
    int n;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;

    int e;
    cout<<"Enter the number of edges:"<<endl;
    cin>>e;


    Graph g(n);

    for(int i=0; i<e; i++){
        int u, v;
        cout<<"Enter u and v:";
        cin>>u>>v;
        g.addEdge(u, v);

    }
    g.display();
    return 0;

    
}