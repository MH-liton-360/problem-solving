#include <bits/stdc++.h>
using namespace std;

int Hostelmeal(int S1, int D1, int D2, int S2)
{
    int result = (S1 * (D1 - D2)) / (S1 + S2);
    return result;
}

int main()
{
    int S1, D1, D2, S2;
    cin >> S1 >> D1 >> D2 >> S2;

    int output = Hostelmeal(S1, D1, D2, S2);
    cout << output << " days" << endl;

    return 0;
}