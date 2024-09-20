#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int rimi = (X - (2 * Y) - Z) / 3;
    int proma = rimi + Y;
    int monisha = proma + Z;

    cout << "Proma " << proma << "," << " Rimi " << rimi << "," << " Monisha " << monisha << endl;

    return 0;
}

/*
string Flags(string X, string Y, string Z)
{
    string Proma = (X / 4) + Y;
    return "Proma" Proma;

    string Rimi = X / 4;
    return "Rimi" Rimi;

    string Monisha = Proma + Z;
    return "Monisha" Monisha;
}

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    string output = Flags(X, Y, Z);
    cout << output << endl;

    return 0;
}
*/