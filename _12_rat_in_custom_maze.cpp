#include <bits/stdc++.h>
using namespace std;
const string move = "DLRU";
int di[] = {1, 0, 0, -1};
int dj[] = {0, -1, 1, 0};
void getPath(int i, int j, pair<int, int> destination, vector<vector<int>> &v, string path)
{
    string move = "DLRU";
    // cout << "destination" << destination.first << destination.second << endl;
    if (i < 0 || j < 0 || i >= destination.first || j >= destination.second || v[i][j] == 2 || v[i][j] == 0)
        return;

    if (i == destination.first - 1 && j == destination.second - 1)
    {
        cout << path << endl;
        return;
    }
    v[i][j] = 2;
    for (int x = 0; x < 4; x++)
    {
        path += move[x];
        // cout << "path: " << path << endl;

        getPath(i + di[x], j + dj[x], destination, v, path);
        path.pop_back();
    }
    v[i][j] = 1;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n, m;
    n = 2;
    m = 3;
    vector<vector<int>> v = {{1, 1, 0},
                             {1, 1, 1}};

    // vector<vector<int>> v(n, vector<int>(m, 0));
    getPath(0, 0, make_pair(n, m), v, "");
    return 0;
}
