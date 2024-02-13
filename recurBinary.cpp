#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool binarysearch(int arr[], int s, int e, int k)
{
    cout << endl;
    print(arr, s, e);
    // base case

    // Element not found
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    // Element Found
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarysearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, k);
    }
}

int main()

{

    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 18;

    cout<< "Element is Present or not " << binarysearch(arr, 0, 5, key) << endl;

    return 0;
}