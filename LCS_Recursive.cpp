#include <bits/stdc++.h>
using namespace std;

// RECURSIVE SOLUTION AS ASKED BY BHAIYA
class Solution
{
public:
    int LCS(string t, string s)
    {
        return help(t, s, t.size(), s.size());
    }

    int help(string t, string s, int m, int n)
    {
        if (m - 1 == 0 || n - 1 == 0)
            return 0;

        if (t[m - 1] == s[n - 1])
            return 1 + help(t, s, m - 1, n - 1);

        else
            return max(help(t, s, m, n - 1), help(t, s, m - 1, n));
    }
};

int main()
{
    Solution ss;
    string t = "abcde";
    string s = "ace";
    cout << ss.LCS(t, s);
    return 0;
}