#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;
        float output = sqrt(a);

        if ((int)output % 2 == 0 || (int)output % 3 == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}