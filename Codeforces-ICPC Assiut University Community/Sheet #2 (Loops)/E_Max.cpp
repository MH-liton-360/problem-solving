#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx = -1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x > mx)
            mx = x;
    }
    cout << mx << endl;

    return 0;
}