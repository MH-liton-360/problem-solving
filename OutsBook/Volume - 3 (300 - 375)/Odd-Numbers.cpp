#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {

        int value = (n / 4) + 1;
        int x = (value - 2) - 2;
        int y = value - 2;
        int Z = value + 2;

        cout << x << " " << y << " " << value << " " << Z << endl;
    }

    return 0;
}