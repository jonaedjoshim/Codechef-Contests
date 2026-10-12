#include <bits/stdc++.h>
using namespace std;

#define ll long long

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

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<ll> p(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            p[i] = p[i - 1] + a[i];
        }

        vector<ll> prefMin(n + 1);
        prefMin[0] = 4e18;
        for (int i = 1; i <= n; i++)
        {
            prefMin[i] = min(prefMin[i - 1], p[i]);
        }

        vector<ll> suffMin(n + 2);
        suffMin[n + 1] = 4e18;
        for (int i = n; i >= 1; i--)
        {
            suffMin[i] = min(suffMin[i + 1], p[i]);
        }

        int flag = 0;

        for (int d = 1; d <= n; d++)
        {
            if (prefMin[d - 1] >= 0 && a[d] <= suffMin[d + 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}