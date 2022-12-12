#include <bits/stdc++.h>
using namespace std;

int target_sum_from_subsequence(int index, int array[], int sum, int n, vector<int> v)
{
    if (index == n)
    {
        if (sum == 0)
        {

            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            return 1;
        }

        return 0;
    }
    int left = 0;
    int right = 0;
    if (array[index] <= sum)
    {
        sum -= array[index];
        v.push_back(array[index]);
        left = target_sum_from_subsequence(index, array, sum, n, v);
        v.pop_back();
        sum += array[index];
    }
    right = target_sum_from_subsequence(index + 1, array, sum, n, v);
    return left + right;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};
    vector<int> v;
    int result = target_sum_from_subsequence(0, arr, 4, 4, v);
    cout << result << endl;
    return 0;
}
