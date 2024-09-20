#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int proma = (X / 4) + Y;
    int rimi = X / 4;
    int monisha = proma + Z;

    cout << "Proma " << proma << "," << " Rimi " << rimi << "," << " Monisha " << monisha << endl;

    return 0;
}