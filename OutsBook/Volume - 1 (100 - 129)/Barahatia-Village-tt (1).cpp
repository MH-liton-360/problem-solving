#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, x, person;
    cin >> p >> x;

    int Increasep = 100 + p;
    person = (x * 100) / Increasep;
    cout << person << endl;

    return 0;
}