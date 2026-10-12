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
        long long n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 3)
        {
            cout << 4 << endl;
        }
        else if (n % 2 == 0)
        {
            cout << 3 * n / 2 + 1 << endl;
        }
        else
        {
            cout << (3 * n - 1) / 2 << endl;
        }
    }

    return 0;
}