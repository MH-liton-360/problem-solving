#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int output = x / 1000;

    if (output % 2 == 0)
    {
        cout << "EVEN\n";
    }
    else
        cout << "ODD" << endl;

    return 0;
}