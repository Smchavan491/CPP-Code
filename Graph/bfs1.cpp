#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int v;
    list<int> *l;

public:
    Graph(int v){
        this->v=v;
        l = new list<int>[v];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u); //for undirected graph
    }

    //bfs function 
    void bfs(addEdge, visited){
        queue<int> q;
        vector<bool> vis(int V, false);

        q.push(0);
        vis[0] = true;

        while(q.szie() > 0){
            int u = q.front();
            q.pop();

            cout<<u<<" ";

            for(int v : l[u]){
                if(!vis[v]{
                    vis[v] = true;
                    q.push
                })
            }
        }


    }
};

