/*Question: You will be given a directed graph as input.
Store this graph in an adjacency list.
Now, convert this adjacency list to
an adjacency matrix (index starting from 1)
and print it. Consider root as 1.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n +1];
    int adjmatrix[n+1][n+1] = {0};

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j : adj[i])
        {
            adjmatrix[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjmatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
