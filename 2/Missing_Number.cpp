#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;
    cin >> s;

    int total = 1 + 2 + 3 + 4;
    int missing = total - s;

    cout << missing << endl;

    return 0;
}