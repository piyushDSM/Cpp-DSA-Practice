#include<iostream>
using namespace std;


bool issorted(int arr[], int size)
{
    //base case
    if (size == 0 || size == 1) 
    {
        return true;
    }
    if (arr[0]>arr[1])
    {
    return false;
    }
    else
    {
        bool remainpart = issorted(arr + 1, size - 1);
        return remainpart;
    }

}
int main()
{
int arr[5]={2,3,4,0,6};
int size =5;

bool ans = issorted(arr,size);

if (ans){
    cout<< "Array is Sorted";
}

else {
    cout<< " Arry is not sorted";
}


return 0;
}