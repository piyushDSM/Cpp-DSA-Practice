#include <bits/stdc++.h>
using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}


/*
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1 = a.size();
    int n2 = b.size();
    int i =0;
    int j=0;

    vector<int> UnionArr;

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(UnionArr.size()==0 || UnionArr.back()!=a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;
        }

        else {
            if(UnionArr.size()==0 || UnionArr.back()!=b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while(j<n2){
         if(UnionArr.size()==0 || UnionArr.back()!=b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
    }

    while(i<n1){
        if(UnionArr.size()==0 || UnionArr.back()!=a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;
    }

    return UnionArr;
}

*/