#include <bits/stdc++.h>
using namespace std;

int Findbig(int m, int n)
{
    if (m > n || m == n)
        return m;
    else
        return n;
}

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        int output = Findbig(m, n);
        cout << output << endl;
    }

    return 0;
}