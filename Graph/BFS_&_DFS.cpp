#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V; // Total vertex
    list<int> *l; // dynamic list

public:
    Graph(int V) {
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void BFS() { // O(V + E)
        queue<int> q;
        q.push(0);

        vector<bool> vis(V);
        vis[0] = true;

        while (q.size()) {
            int u = q.front();
            q.pop();

            cout << u << " ";

            for (auto& v : l[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        } 
        cout << endl;
    }

    void dfsHelper(int u, vector<bool>& vis) {
        cout << u << " ";
        vis[u] = true;
    
        for (auto& v : l[u]) {
            if (!vis[v]) dfsHelper(v, vis);
        }
    }

    void DFS() { // O(V + E)
        vector<bool> vis(V);
        dfsHelper(0, vis);
    }
};

int main() {

    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    cout << "BFS : ";
    g.BFS();
    cout << "DFS : ";
    g.DFS();
    
    return 0;
}