#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, I;
    cin >> x >> y >> I;

    int Interest_rate = ((I * 100) / (x * y));
    cout << Interest_rate << "%" << endl;

    return 0;
}