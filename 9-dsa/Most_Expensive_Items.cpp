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
        int n, k;
        cin >> n >> k;

        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        sort(c.begin(), c.end(), greater<int>());

        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += c[i];
        }

        cout << ans << '\n';
    }

    return 0;
}