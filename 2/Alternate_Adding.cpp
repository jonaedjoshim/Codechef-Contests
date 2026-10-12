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

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long answer = 0;
        for (int i = 0; i < n; i++)
        {
            answer += abs(a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i] > 0 && a[i + 1] < 0) || (a[i] < 0 && a[i + 1] > 0))
            {
                answer -= min(abs(a[i]), abs(a[i + 1]));
            }
        }
        cout << answer << endl;
    }

    return 0;
}