#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int V, E;
    cin >> V >> E;

    int adj[V + 1][V + 1];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    return 0;
}

// TC -> O(E) -> (V * V)  , including matrix initialization.
// SC -> O(V * V)
