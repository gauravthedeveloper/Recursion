#include <bits/stdc++.h>
using namespace std;
int binary_search(int array[], int lb, int ub, int search)
{
    if (lb <= ub)
    {

        int mid = lb + (ub - lb) / 2;
        if (array[mid] == search)
        {
            return mid;
        }
        else if (array[mid] > search)
        {
            return binary_search(array, lb, mid - 1, search);
        }
        else

            return binary_search(array, mid + 1, ub, search);
    }
    else
        return -1;
}
int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 45;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, n - 1, 4);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
