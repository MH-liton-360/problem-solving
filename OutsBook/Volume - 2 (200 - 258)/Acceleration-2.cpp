#include <bits/stdc++.h>
using namespace std;

pair<double, double> acceleration(double u, double v, double t)
{
    double result = (v - u) / t;
    double distance = 0.5 * ((u + v) * t);
    return {result, distance};
}

int main()
{
    double u, v, t;
    cin >> u >> v >> t;
    pair<double, double> Output = acceleration(u, v, t);
    cout << fixed << setprecision(1) << Output.first << endl;
    cout << fixed << setprecision(1) << Output.second << endl;
    return 0;
}