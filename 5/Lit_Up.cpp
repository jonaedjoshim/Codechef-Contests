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

        vector<int> c(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> c[i];
        }

        int ans = -1;

        int limit_i = min(n, k + 1);

        for (int i = 1; i <= limit_i; i++)
        {
            int start_j = max(i + 1, n - k);

            for (int j = start_j; j <= n; j++)
            {
                if (i + 2 * k + 1 >= j)
                {
                    int cost = c[i] + c[j];
                    if (ans == -1 || cost < ans)
                    {
                        ans = cost;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}