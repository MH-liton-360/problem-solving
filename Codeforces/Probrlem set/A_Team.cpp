#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int output = a + b + c;

        if (output >= 2)
            count++;
    }
    cout << count << endl;
    return 0;
}