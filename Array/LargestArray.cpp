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