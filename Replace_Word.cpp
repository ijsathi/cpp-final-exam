#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;

    for (int t = 0; t < test_case; t++)
    {
        string s, x;
        cin >> s >> x;

        int find_position = s.find(x);
        while (find_position != -1)
        {
            s.replace(find_position, x.length(), "#");
            find_position = s.find(x, find_position + 1);
        }
        cout << s << endl;
    }
    return 0;
}