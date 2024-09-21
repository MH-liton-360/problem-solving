#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int result = ((x1 + x2) / 2);
    int res = ((y1 + y2) / 2);
    cout << result << " " << res << endl;

    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

pair<int, int> midpoint(int x1, int y1, int x2, int y2)
{
    int result = ((x1 + x2) / 2);
    int res = ((y1 + y2) / 2);
    return {result, res};
}
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    pair<int, int> output = midpoint(x1, y1, x2, y2);
    cout << output.first << " " << output.second << endl;
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

void midpoint(int x1, int y1, int x2, int y2)
{
    int result = ((x1 + x2) / 2);
    int res = ((y1 + y2) / 2);
    cout << result << " " << res << endl;
}
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    midpoint(x1, y1, x2, y2);

    return 0;
}
*/