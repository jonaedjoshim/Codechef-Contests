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

        vector<int> count(31, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            int highest_bit = 0;

            while (x > 1)
            {
                x = x / 2;
                highest_bit++;
            }

            count[highest_bit]++;
        }

        int answer = 0;

        for (int i = 0; i < 31; i++)
        {
            if (count[i] > answer)
            {
                answer = count[i];
            }
        }

        cout << answer << endl;
    }

    return 0;
}