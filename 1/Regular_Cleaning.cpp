#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int next = ((n / 10) + 1) * 10;
    int result = next - n;
    cout << result << endl;
    return 0;
}