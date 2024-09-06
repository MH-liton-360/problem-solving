#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, m;
    cin >> x >> y >> m;

    int avgF = (3 * x);
    int avgM = (3 * y);
    int Father = ((avgF - avgM) + m);
    cout << Father << endl;

    return 0;
}