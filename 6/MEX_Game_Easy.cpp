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

        int freq[105] = {0};
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
            sum += x;
        }

        int mex = 0;
        while (freq[mex] > 0)
        {
            mex++;
        }

        int greater_count = 0;
        for (int i = mex + 1; i <= 100; i++)
        {
            greater_count += freq[i];
        }

        int final_sum = greater_count * (mex + 1) + mex * (mex - 1) / 2;
        int moves = sum - final_sum;

        if (moves % 2 == 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}