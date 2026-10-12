#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int beauty = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                beauty++;
        }

        int ans = beauty;

        for (int l = 0; l < n; l++)
        {
            for (int r = l; r < n; r++)
            {
                int change = 0;

                if (l > 0)
                {
                    if (s[l - 1] == s[l])
                    {
                        change--;
                    }
                    if (s[l - 1] == s[r])
                    {
                        change++;
                    }
                }

                if (r < n - 1)
                {
                    if (s[r] == s[r + 1])
                    {
                        change--;
                    }
                    if (s[l] == s[r + 1])
                    {
                        change++;
                    }
                }

                ans = max(ans, beauty + change);
            }
        }

        cout << ans << endl;
    }

    return 0;
}