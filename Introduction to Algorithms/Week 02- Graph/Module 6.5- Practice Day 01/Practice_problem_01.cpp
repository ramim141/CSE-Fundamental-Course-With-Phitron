#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 6;
int adj_matrix[N][N];
vector<int> adj_list[N];

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> adj_matrix[i][j];
        }
    }

    // Convert adjacency matrix to adjacency list
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (adj_matrix[i][j] == 1)
            {

                adj_list[i].push_back(j);
            }
        }
    }

    // Print the adjacency list
    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << " : ";
        for (int v : adj_list[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}