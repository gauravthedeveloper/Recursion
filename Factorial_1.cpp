#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main(int argc, char const *argv[])
{
    int i = 5;
    cout << factorial(i) << endl;
    return 0;
}
