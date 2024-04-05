#include <iostream>
using namespace std;

bool Search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        else
        {
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {5, 7, -2, 10, 20, -2, 0, 5, 22, 1};

    cout << "Enter the Element to Search in the Array" << endl;
    int key;
    cin >> key;

    bool found = Search(arr, 10, key);

    if (found)
    {
        cout << " element is Present " << endl;
    }
    else
    {
        cout << " element is not Present " << endl;
    }

    return 0;
}