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
        long long m;
        cin >> n >> m;

        long long a[100005];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;
        int left = 0;
        long long sum = 0;

        for (int right = 0; right < n; right++)
        {
            sum += a[right];

            while (sum > m)
            {
                sum -= a[left];
                left++;
            }

            int len = right - left + 1;
            if (len > ans)
            {
                ans = len;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}