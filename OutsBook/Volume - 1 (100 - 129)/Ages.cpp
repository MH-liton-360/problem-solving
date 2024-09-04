#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, Father, Daughter;
    cin >> x;

    Daughter = x / 5;
    Father = Daughter * 4;

    cout << Father << " " << Daughter << endl;

    return 0;
}