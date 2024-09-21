#include <bits/stdc++.h>
using namespace std;

int Easy(int x, int y, int z)
{
    int result = (y + z) / x;
    return result;
}
int main()
{
    int N, p, d;
    cin >> N >> p >> d;
    int Output = Easy(N, p, d);
    cout << Output << endl;
    return 0;
}