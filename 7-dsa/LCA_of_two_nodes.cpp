#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, u, v;
    cin >> n >> u >> v;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> parent(n + 1, 0);
    vector<int> depth(n + 1, 0);
    vector<int> visited(n + 1, 0);

    queue<int> q;

    visited[1] = 1;
    parent[1] = 0;
    depth[1] = 0;
    q.push(1);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < adj[cur].size(); i++)
        {
            int next = adj[cur][i];

            if (visited[next] == 0)
            {
                visited[next] = 1;
                parent[next] = cur;
                depth[next] = depth[cur] + 1;
                q.push(next);
            }
        }
    }

    int a = u;
    int b = v;

    while (depth[a] > depth[b])
    {
        a = parent[a];
    }

    while (depth[b] > depth[a])
    {
        b = parent[b];
    }

    while (a != b)
    {
        a = parent[a];
        b = parent[b];
    }

    cout << a << endl;

    return 0;
}