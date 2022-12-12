#include <bits/stdc++.h>
using namespace std;
bool reverse(int index, string s, int n)
{
    if (index > (n / 2))
        return true;

    // cout << s[index] << " " << s[n - index - 1] << endl;
    if (s[index] == s[n - index - 1])
    {
        reverse(index + 1, s, n);
    }
    else
        return false;
}
int main(int argc, char const *argv[])
{
    string g = "helleh";

    bool x = reverse(0, g, 6);
    // cout << x << endl;
    (x) ? cout << "pallindrome" << endl : cout << "invalid" << endl;
    return 0;
}
