#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int out = n / 5;
    int output = (n / 5) + 1;

    if (n % 5 == 0)
        cout << out << endl;
    else
        cout << output << endl;

    return 0;
}