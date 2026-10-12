#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;

        int ans = INT_MAX;

        for (int d = 0; d <= min(a, b); d++)
        {
            int remaining_a = a - d;
            int remaining_b = b - d;

            int cost = d * r;
            cost += (remaining_a / 2) * p + (remaining_a % 2) * p;
            cost += (remaining_b / 2) * q + (remaining_b % 2) * q;

            ans = min(ans, cost);
        }

        cout << ans << endl;
    }

    return 0;
}