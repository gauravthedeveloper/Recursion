#include <bits/stdc++.h>
using namespace std;

int countsubsequence(int index, int array[], int n, int &count)
{
    if (index == n)
    {
        count = count + 1;
    }

    else
    {
        // pick
        // v.push_back(array[index]);
        countsubsequence(index + 1, array, n, count);
        // v.pop_back();
        // not pick
        countsubsequence(index + 1, array, n, count);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 4, 6, 5};

    int count = 0;
    countsubsequence(0, arr, 4, count);
    cout << count << endl;
    return 0;
}
