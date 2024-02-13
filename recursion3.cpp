#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    //print(n - 1); // Head recursion  

    cout << n <<endl;

   print(n - 1); // tail recursion  
}
int main()
{

    int n;

    cout << "enter the number ";
    cin >> n;
    cout << endl;

    print(n);

    return 0;
}