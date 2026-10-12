#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        int maximum = 0;

        for (int i = 0; i < n; i++)
        {
            maximum = max(maximum, c[i]);
            for (int j = i + 1; j < n; j++)
            {
                if (c[i] <= c[j])
                {
                    maximum = max(maximum, c[i] + c[j]);
                }
            }
        }

        cout << maximum << endl;
    }

    return 0;
}