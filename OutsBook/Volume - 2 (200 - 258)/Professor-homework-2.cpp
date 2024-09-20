#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int value = n / 3;
    int x = value - 1;
    int y = value + 1;

    cout << x << " " << value << " " << y << endl;
    return 0;
}