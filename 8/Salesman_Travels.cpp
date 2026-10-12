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
        int n, k;
        cin >> n >> k;

        vector<int> p;
        int start = 1;
        int end = n;
        int tail = -1;

        int rem = n % 4;

        if (rem == 2)
        {
            p.push_back(1);
            p.push_back(2);
            start = 3;
        }
        else if (rem == 3)
        {
            p.push_back(1);
            p.push_back(2);
            tail = 3;
            start = 4;
        }
        else if (rem == 1)
        {
            tail = n;
            end = n - 1;
        }

        for (int x = start; x + 3 <= end; x = x + 4)
        {
            p.push_back(x);
            p.push_back(x + 2);
            p.push_back(x + 1);
            p.push_back(x + 3);
        }

        if (tail != -1)
        {
            p.push_back(tail);
        }

        for (int i = 0; i < p.size(); i++)
        {
            if (i > 0)
            {
                cout << " ";
            }
            cout << p[i];
        }
        cout << endl;
    }

    return 0;
}