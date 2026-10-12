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
        int n, m;
        cin >> n >> m;

        string s, l;
        cin >> s >> l;

        int leftHand[26] = {0};

        for (int i = 0; i < m; i++)
        {
            leftHand[l[i] - 'a'] = 1;
        }

        int ans = 1;
        int current = 1;

        for (int i = 1; i < n; i++)
        {
            if (leftHand[s[i] - 'a'] == leftHand[s[i - 1] - 'a'])
            {
                current++;
            }
            else
            {
                current = 1;
            }

            if (current > ans)
            {
                ans = current;
            }
        }

        cout << ans << endl;
    }

    return 0;
}