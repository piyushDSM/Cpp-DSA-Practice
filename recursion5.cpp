#include <iostream>
using namespace std;

void saydigit(int n, string arr[])
{

    // base case
    if (n == 0)
        return ;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call
    saydigit(n, arr);

    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two",
                      "three", "four", "five",
                      "six", "seven", "eight", "nine"};

    int n;
    cout << "Enter the number";
    cin >> n;

    cout << endl
         << endl
         << endl;
    saydigit(n, arr);
    cout << endl
         << endl
         << endl;

    return 0;
}