#include <bits/stdc++.h>
using namespace std;
void reverse(int index, int *array, int n)
{
    if (index > n / 2)
    {
        return;
    }

    else
    {
        int temp = array[index];
        array[index] = array[n - index - 1];
        array[n - index - 1] = temp;
        reverse(index + 1, array, n);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 4, 10, 40};

    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
