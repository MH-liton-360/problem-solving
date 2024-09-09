#include <bits/stdc++.h>
using namespace std;

int landCut(int P1, int D1, int P2)
{
    int person = (P1 * D1) / P2;
    return person;
}

int main()
{
    int P1, D1, P2;
    cin >> P1 >> D1 >> P2;

    int Output = landCut(P1, D1, P2);
    cout << Output << " Days " << endl;

    return 0;
}