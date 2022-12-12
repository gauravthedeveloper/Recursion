#include <bits/stdc++.h>
using namespace std;
void print_subsequence_divible_by_k(int index, int *array, vector<int> v, int sum, int k, int n)
{
    if (index == n)
    {
        if (sum % k == 0)
        {
            for (int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }

        return;
    }
    // pick
    sum += array[index];
    v.push_back(array[index]);
    print_subsequence_divible_by_k(index + 1, array, v, sum, k, n);
    // not pick
    v.pop_back();
    sum -= array[index];
    print_subsequence_divible_by_k(index + 1, array, v, sum, k, n);
}
int main(int argc, char const *argv[])
{
    vector<int> v;
    int arr[] = {1, 2, 5};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    print_subsequence_divible_by_k(0, arr, v, 0, k, n);
    return 0;
}
