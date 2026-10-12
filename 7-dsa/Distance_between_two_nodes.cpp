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

    vector<int> dist(n + 1, -1);
    queue<int> q;

    dist[u] = 0;
    q.push(u);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < adj[cur].size(); i++)
        {
            int next = adj[cur][i];

            if (dist[next] == -1)
            {
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }

    cout << dist[v] << endl;

    return 0;
}