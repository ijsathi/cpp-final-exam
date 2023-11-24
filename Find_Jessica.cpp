/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool found = false;
    for (int i = 0; (i = s.find("Jessica", i)) != -1; i++)
    {
        if ((i == 0 || !isalpha(s[i - 1])) && (i + 7 == s.length() || !isalpha(s[i + 7])))
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string jessica;
    bool found = false;
    while (ss >> jessica)
    {
        if (jessica == "Jessica")
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}