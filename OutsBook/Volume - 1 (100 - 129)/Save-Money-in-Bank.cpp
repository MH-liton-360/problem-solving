#include <bits/stdc++.h>
using namespace std;
int yearIncome(int x, int y, int z)
{
    int result = (x - (y + z)) * 12;
    return result;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int output = yearIncome(x, y, z);
    cout << output << " Taka " << endl;

    return 0;
}