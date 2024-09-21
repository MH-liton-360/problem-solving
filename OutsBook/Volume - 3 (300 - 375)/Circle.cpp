#include <bits/stdc++.h>
using namespace std;

double circle(double r, double pi)
{

    return (pi * (pow(r, 2)));
}

int main()
{
    double r, pi = 3.1416;
    while (cin >> r)
    {
        double output = circle(r, pi);
        cout << fixed << setprecision(2) << output << endl;
    }

    return 0;
}