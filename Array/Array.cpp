#include <iostream>
using namespace std;

// returning max value
int getMax(int num[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

// returning min value
int getMin(int num[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{

    int size;
    cout << "Enter the number ";
    cin >> size;

    cout << " Enter the Elements of " << size;

    int num[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "the maximum value " << getMax(num, size) << endl;
    cout << "the minimum value " << getMin(num, size) << endl;
    return 0;
}