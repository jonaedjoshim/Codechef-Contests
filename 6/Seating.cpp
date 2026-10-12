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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> occupied(n + 1, 0);

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            occupied[x] = 1;
        }

        int flag = 0;

        for (int seat = 1; seat <= n && k > 0; seat++)
        {
            if (occupied[seat] == 0)
            {
                if (flag == 0)
                {
                    cout << seat;
                    flag = 1;
                }
                else
                {
                    cout << " " << seat;
                }

                occupied[seat] = 1;
                k--;
            }
        }

        cout << endl;
    }

    return 0;
}