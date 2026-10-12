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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            freq[arr[i] - i]++;
        }

        int count = 0;

        for (auto it = freq.begin(); it != freq.end(); it++)
        {
            if (it->second > count)
            {
                count = it->second;
            }
        }

        cout << n - count << endl;
    }

    return 0;
}