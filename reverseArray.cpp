#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{

  int arr[6] = {1, 4, 0, 5, -2, 15};
  int arr2[5] = {2, 6, 3, 9, 4};

  reverse(arr, 6);
  reverse(arr2, 5);

  printArray(arr, 6);
  printArray(arr2, 5);

  return 0;
}