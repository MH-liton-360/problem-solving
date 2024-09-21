#include <bits/stdc++.h>
using namespace std;

int NFlag(int l)
{
    int Width = (l * 6) / 10;
    return Width;
}
int main()
{
    int l;
    cin >> l;
    int Output = NFlag(l);
    cout << Output << endl;
    return 0;
}