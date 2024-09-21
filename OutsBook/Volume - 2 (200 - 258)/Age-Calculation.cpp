#include <bits/stdc++.h>
using namespace std;

int agecal(int x)
{
    int Fage = (20 + 6) + x;
    return Fage;
}

int main()
{
    int x;
    cin >> x;

    int result = agecal(x);
    cout << result << " Years 6 Months" << endl;

    return 0;
}