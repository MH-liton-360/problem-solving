#include <bits/stdc++.h>
using namespace std;

pair<int, int> NFlag(int l)
{
    int Width = (l * 6) / 10;
    int radius = (l * 1) / 5;
    return {Width, radius};
}
int main()
{
    int l;
    cin >> l;
    pair<int, int> Output = NFlag(l);
    cout << Output.first << " " << Output.second << endl;
    return 0;
}