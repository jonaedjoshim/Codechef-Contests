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

        long long k = (sqrt(1 + 8 * n) - 1) / 2;

        while (k * (k + 1) / 2 <= n)
        {
            k++;
        }

        while (k * (k + 1) / 2 > n)
        {
            k--;
        }

        cout << k << endl;
    }

    return 0;
}