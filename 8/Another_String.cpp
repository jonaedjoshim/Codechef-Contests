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

        string a, b;

        cin >> a >> b;

        int ones_a = 0, ones_b = 0;

        for (int i = 0; i < n; i++)

        {

            if (a[i] == '1')

                ones_a++;

            if (b[i] == '1')

                ones_b++;
        }

        if (ones_a % 2 == ones_b % 2)

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