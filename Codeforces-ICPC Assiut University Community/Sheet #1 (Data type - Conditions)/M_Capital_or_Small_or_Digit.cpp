#include <bits/stdc++.h>
using namespace std;

string ChracterCheck(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return "ALPHA\nIS CAPITAL";
    else if (ch >= 'a' && ch <= 'z')
        return "ALPHA\nIS SMALL";
    else if (ch >= '0' && ch <= '9')
        return "IS DIGIT";
}

int main()
{
    char ch;
    cin >> ch;

    string output = ChracterCheck(ch);
    cout << output << endl;

    return 0;
}