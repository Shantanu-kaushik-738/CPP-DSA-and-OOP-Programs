#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj(V + 1);
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    return 0;
}

// TC -> O(V + E)
// SC -> O(V + E)
