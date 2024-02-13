#include <iostream>
using namespace std;

void rotateArray (int arr[], int n)
{
  int temp = arr[0]; //Storing the first element in the array
  
    for (int i = 0; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;
    
    for (int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    
}

int main()
{
    int arr[] = {1, 3, 6, 8, 9};
    rotateArray(arr,5);
    return 0;
}