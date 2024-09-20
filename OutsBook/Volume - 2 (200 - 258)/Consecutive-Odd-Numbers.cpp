#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int value = n / 3;
    int x = value - 2;
    int y = value + 2;

    cout << x << " " << value << " " << y << endl;
    return 0;
}