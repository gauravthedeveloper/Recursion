#include <bits/stdc++.h>
using namespace std;
int printsubsequence(int index, vector<int> v, int array[], int n)
{
    if (index == n)
    {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }

    else
    {
        // pick
        v.push_back(array[index]);
        printsubsequence(index + 1, v, array, n);
        v.pop_back();
        // not pick
        printsubsequence(index + 1, v, array, n);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 4, 6};
    vector<int> v;
    printsubsequence(0, v, arr, 4);
    return 0;
}
