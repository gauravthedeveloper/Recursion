#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------
// steps to reach from (0,0) to (p.first,p.second)

// order of 2^(p.first*p.second) FEEL for every cell i have two options
void step(int x, int y, pair<int, int> p, string path)
{
    if (x > p.first || y > p.second)
        return;
    if (p.first == x && p.second == y)
    {
        cout << path << endl;
        return;
    }

    if (x < p.first)
    {
        string line = path + "right" + " ";

        step(x + 1, y, make_pair(p.first, p.second), line);
    }
    if (y < p.second)
    {
        string line = path + "up" + " ";
        step(x, y + 1, make_pair(p.first, p.second), line);
    }
}
int main(int argc, char const *argv[])
{
    pair<int, int> p;
    p.first = 5;
    p.second = 7;
    step(0, 0, p, "");
    return 0;
}
