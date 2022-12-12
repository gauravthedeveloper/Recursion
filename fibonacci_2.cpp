#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, char const *argv[])
{
    int i = 10;
    cout << fibonacci(i) << endl;
    return 0;
}
// for every iteration   of fibonacci it is making 2 calls for every call to fib
// say it came with 5 it makes 2 calls for 4,3 and each of 4 and 3 make 2 calls for ////its //own
// so the time complexity if 2power n
// thr space complexity would be order of n which is the height of the bonary tree
// and that is the maximum depth one can have