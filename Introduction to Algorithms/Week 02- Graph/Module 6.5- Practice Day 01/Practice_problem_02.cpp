#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 6;
bool visited[N] = {false};
vector<int> adj[N];
vector<int> dfs_Order; // Store the DFS order

void dfs(int u)
{ // section-1: actions just after entering node u
 dfs_Order.push_back(u);
    visited[u] = true;

   // cout << u << " ";
    for (int v : adj[u])
    {
        // section 1: actions before entering a new neighbor
        if (visited[v]==true)
        continue;
        
            dfs(v);
        
    }
}
int main()
{

    int n, m;
    cin >> n >> m;
    

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
       
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    dfs(1);

    for (int i = dfs_Order.size() - 1; i >= 0; i--) {
        cout << dfs_Order[i] << " ";
    }

    return 0;
}
