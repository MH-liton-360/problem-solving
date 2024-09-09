#include <bits/stdc++.h>
using namespace std;

void character(char ch)
{
    if (islower(ch))
        cout << (char)toupper(ch) << endl;
    else if (isupper(ch))
        cout << (char)tolower(ch) << endl;
}

int main()
{
    char ch;
    cin >> ch;

    character(ch);

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

string characterCheck(char ch)
{
    if (islower(ch))
        return string(1, toupper(ch));
    else if (isupper(ch))
        return string(1, tolower(ch));
}

int main()
{
    char ch;
    cin >> ch;

    string result = characterCheck(ch);
    cout << result << endl;

    return 0;
}
*/