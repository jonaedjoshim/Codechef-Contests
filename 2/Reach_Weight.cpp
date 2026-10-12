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

        int cost = 0;

        while (n > 0)
        {
            if (n % 2 == 0)
            {
                cost += 30;
                n -= 2;
            }
            else
            {
                cost += 20;
                n -= 1;
            }
        }

        cout << cost << endl;
    }

    return 0;
}