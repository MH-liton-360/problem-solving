#include <bits/stdc++.h>
using namespace std;

int Findsmall(int m, int n, int x)
{
    return min(m, min(n, x));
}

int main()
{
    int m, n, x;
    while (cin >> m >> n >> x)
    {
        int output = Findsmall(m, n, x);
        cout << output << endl;
    }

    return 0;
}