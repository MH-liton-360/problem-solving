#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int value = (n / 5);
        int x = (value - 2) - 2;
        int y = value - 2;
        int Z = value + 2;
        int w = Z + 2;

        cout << x << " " << y << " " << value << " " << Z << " " << w << endl;
    }

    return 0;
}