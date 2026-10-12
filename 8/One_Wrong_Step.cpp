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

        string s;
        cin >> s;

        int x = 0, y = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'D')
                y--;
            else if (s[i] == 'L')
                x--;
            else
                x++;
        }

        if (
            (x == 0 && y == 2) ||
            (x == 0 && y == -2) ||
            (x == 2 && y == 0) ||
            (x == -2 && y == 0)
            )
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