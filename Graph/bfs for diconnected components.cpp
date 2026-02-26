#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

// Function to create the adjacency list
void printAdjList(vector<vector<int>> &edges, unordered_map<int, list<int>> &adjlist) {
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].push_back(v);
        adjlist[v].push_back(u); // for undirected graph
    }
}

// BFS traversal from a node
void bfs(unordered_map<int, list<int>> &adjlist, vector<bool> &visited, vector<int> &ans, int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for (auto i : adjlist[frontNode]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

// Full traversal for all components means it will work for all disconnected components also
vector<int> bfsTraversal(int vertex, vector<vector<int>> &edges) {
    unordered_map<int, list<int>> adjlist;
    vector<int> ans;
    vector<bool> visited(vertex, false);

    printAdjList(edges, adjlist);

    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            bfs(adjlist, visited, ans, i);
        }
    }
    return ans;
}

// Main function with user input
int main() {
    int vertex, edgeCount;
    cout << "Enter number of vertices: ";
    cin >> vertex;

    cout << "Enter number of edges: ";
    cin >> edgeCount;

    vector<vector<int>> edges;

    cout << "Enter edges as pairs of space-separated integers (u v):\n";
    for (int i = 0; i < edgeCount; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    vector<int> result = bfsTraversal(vertex, edges);
    
    cout << "BFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
