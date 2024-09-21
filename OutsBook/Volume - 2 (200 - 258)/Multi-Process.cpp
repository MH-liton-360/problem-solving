#include <bits/stdc++.h>
using namespace std;

int Mprocess(long long int x)
{
    int result = ((((((x * 567) / 9) + 7492) * 235) / 47) - 498);
    return result;
}

int main()
{
    long long int x, Output;
    cin >> x;
    Output = Mprocess(x);
    cout << Output << endl;
    return 0;
}