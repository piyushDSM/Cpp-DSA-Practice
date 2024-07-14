#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int Largest(int arr[],int n){
    int largest = arr[0];
    for (int i=0; i<n; i++){
        if(arr[i] > largest){
           largest = arr[i];
        }
    }
    cout<<"The Largest Element in this Array is "<<largest;
    return 0;
}

int main()
{

int arr[] ={10,30,20,50,60};

Largest(arr,5);



return 0;
}

/*

#include <bits/stdc++.h>
 
using namespace std;
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}



*/