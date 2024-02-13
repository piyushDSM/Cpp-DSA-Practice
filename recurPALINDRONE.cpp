#include <iostream>
using namespace std;

bool checkpalindrone(string &name, int i, int j)
{
    // base case
    if (i > j)
        return true;

    if (name[i] != name[j])
    {
        return false;
    }

    // recursive call
    else
    {
        return checkpalindrone(name, i + 1, j - 1);
    }
}
int main()
{
    string name = "abba";

    bool palindrone = checkpalindrone(name, 0, name.length() - 1);
    if (palindrone)
    {
        cout << " Its a Palindrone " << endl;
    }
    else
    {
        cout << " Not a Palindrone " << endl;
    }
    return 0;
}