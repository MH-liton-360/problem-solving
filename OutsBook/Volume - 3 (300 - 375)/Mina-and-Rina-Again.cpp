#include <bits/stdc++.h>
using namespace std;

pair<int, int> minarina(int x, int y)
{
    int rina = (x - y) / 2;
    int mina = rina + y;

    return {mina, rina};
}
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        pair<int, int> output = minarina(x, y);
        cout << output.first << " " << output.second << endl;
    }

    return 0;
}