#include <bits/stdc++.h>
using namespace std;

int Mprocess(int x, int y, int z)
{
    int result = (((x * y) * z) / (y - x));

    return result;
}

int main()
{
    int x, y, z, Output;
    cin >> x >> y >> z;
    Output = Mprocess(x, y, z);
    cout << Output << endl;
    return 0;
}