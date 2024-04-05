#include <iostream>
using namespace std;

int power(int n)
{

    // base condition
    if (n == 0)
        return 1;
    /*
        // recursive relation
        int smallproblem = power(n - 1);
        int bigproblem = 2 * smallproblem;
        return bigproblem;

        above is for understanding
    */
    return 2 * power(n - 1);
}
int main()
{

    int n;
    cout << "Enter the input";
    cin >> n;

    int ans = power(n);
    cout << ans;

    return 0;
}