#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long mod = 998244353;

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> q(n);
        for (int i = 0; i < n; i++)
        {
            cin >> q[i];
        }

        long long ans = 1;

        for (int i = 0; i < n - k + 1; i++)
        {
            ans = (ans * k) % mod;
        }

        for (int i = 1; i <= k - 1; i++)
        {
            ans = (ans * i) % mod;
        }

        cout << ans << endl;
    }

    return 0;
}