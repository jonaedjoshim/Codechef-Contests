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
        ll mx = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] > mx)
            {
                mx = a[i];
            }
        }

        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << -1 << endl;
            continue;
        }

        int p = -1;
        int q = -1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                if (p == -1)
                {
                    p = i;
                }
                q = i;
            }
        }

        ll low = 1;
        ll high = mx;
        ll ans = 1;

        while (low <= high)
        {
            ll mid = (low + high) / 2;

            int m = -1;
            for (int i = 1; i <= n; i++)
            {
                if (a[i] >= mid)
                {
                    m = i;
                    break;
                }
            }

            int ok = 0;

            if (m != -1 && m <= p)
            {
                ll target = 0;
                for (int i = 1; i < m; i++)
                {
                    target += a[i] - mid;
                }

                ll s = target;
                int bad = n + 1;

                for (int i = m; i <= n; i++)
                {
                    s += a[i] - mid;
                    if (s < target)
                    {
                        bad = i;
                        break;
                    }
                }

                if (bad > q + 1)
                {
                    int l = q + 1;
                    int rmax = min(n, bad - 1);

                    for (int r = l; r <= rmax; r++)
                    {
                        if (r == n || a[r + 1] >= mid)
                        {
                            ok = 1;
                            break;
                        }
                    }
                }
            }

            if (ok == 1)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}