#include <iostream>
using namespace std;

int getsum(int arr[], int size)
{

    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remainpart = getsum(arr + 1, size - 1);
    int sum = arr[0] + remainpart;
    return sum;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int sum = getsum(arr, size);

    cout << "The Sum of Element " << sum;

    return 0;
}