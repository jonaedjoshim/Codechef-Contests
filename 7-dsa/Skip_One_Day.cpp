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
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int total = 0;
        int smallest = a[0];

        for (int i = 0; i < n; i++)
        {
            total += a[i];

            if (a[i] < smallest)
            {
                smallest = a[i];
            }
        }

        int ans = total - smallest;

        cout << ans << endl;
    }

    return 0;
}