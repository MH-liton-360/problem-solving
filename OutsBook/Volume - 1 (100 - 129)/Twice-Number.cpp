#include <bits/stdc++.h>
using namespace std;

int TwiceN(int x, int y)
{
    int Output = (y - x) / 2;
    return Output;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int result = TwiceN(x, y);
    cout << result << endl;
    return 0;
}