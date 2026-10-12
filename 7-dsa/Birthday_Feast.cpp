#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> c(m);
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }

    int maxA = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxA)
        {
            maxA = a[i];
        }
    }

    const int INF = 1e9;

    int dp[1001];
    dp[0] = 0;

    for (int i = 1; i <= maxA; i++)
    {
        dp[i] = INF;

        for (int j = 0; j < m; j++)
        {
            if (b[j] <= i)
            {
                int cost = dp[i - b[j]] + c[j];
                if (cost < dp[i])
                {
                    dp[i] = cost;
                }
            }
        }
    }

    long long total = 0;

    for (int i = 0; i < n; i++)
    {
        total += dp[a[i]];
    }

    cout << total << endl;

    return 0;
}