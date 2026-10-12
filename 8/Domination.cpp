#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> adj(n + 1);
        vector<int> degree(n + 1, 0);

        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);

            degree[u]++;
            degree[v]++;
        }

        long long leaves = 0;

        for (int i = 1; i <= n; i++)
        {
            if (degree[i] == 1)
            {
                leaves++;
            }
        }

        long long invalid = leaves * (n - 2);

        for (int i = 1; i <= n; i++)
        {
            int leaf_neighbors = 0;

            for (int j = 0; j < adj[i].size(); j++)
            {
                int v = adj[i][j];

                if (degree[v] == 1)
                {
                    leaf_neighbors++;
                }
            }

            invalid -= leaf_neighbors * (leaf_neighbors - 1) / 2;
        }

        for (int i = 1; i <= n; i++)
        {
            if (degree[i] == 2)
            {
                int has_leaf = 0;

                for (int j = 0; j < adj[i].size(); j++)
                {
                    int v = adj[i][j];

                    if (degree[v] == 1)
                    {
                        has_leaf = 1;
                    }
                }

                if (has_leaf == 0)
                {
                    invalid++;
                }
            }
        }

        long long total = (long long)n * (n - 1) * (n - 2) / 6;

        cout << total - invalid << '\n';
    }

    return 0;
}