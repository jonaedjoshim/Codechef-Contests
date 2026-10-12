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
        int a, b, c;
        cin >> a >> b >> c;

        int ans = a;
        if (b > ans)
        {
            ans = b;
        }
        if (c > ans)
        {
            ans = c;
        }

        cout << ans << '\n';
    }

    return 0;
}