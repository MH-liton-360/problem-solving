#include <bits/stdc++.h>
using namespace std;

int percentage(int x, int y)
{
    int increase = x - y;
    int result = (increase * 100) / 1000;
    return result;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int output = percentage(x, y);
    cout << output << "%" << endl;

    return 0;
}