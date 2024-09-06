#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, d1, d2, Aperson;
    cin >> x >> d1 >> d2;

    int person = ((x * d1) / d2);
    Aperson = person - x;
    cout << Aperson << endl;

    return 0;
}