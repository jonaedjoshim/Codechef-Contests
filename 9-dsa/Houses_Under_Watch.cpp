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
        int m, x, y;
        cin >> m >> x >> y;

        int reach = x * y;

        int cover[105] = {0};

        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;

            int left = a - reach;
            int right = a + reach;

            if (left < 1)
            {
                left = 1;
            }
            if (right > 100)
            {
                right = 100;
            }

            for (int h = left; h <= right; h++)
            {
                cover[h] = 1;
            }
        }

        int safe = 0;
        for (int h = 1; h <= 100; h++)
        {
            if (cover[h] == 0)
            {
                safe++;
            }
        }

        cout << safe << '\n';
    }

    return 0;
}