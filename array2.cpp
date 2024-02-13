#include<iostream>
using namespace std;

void update(int arr[], int n){
cout<< " Array Value inside Function "<<endl;
arr[0]= 10;

for(int i=0; i<3; i++){
cout<<arr[i] <<" ";
}
cout<<endl;

cout<< " Going back to main  fucntion "<<endl;


}

int main()
{
int arr[3] = {1,2,3};

cout<<" Array in the main " <<endl;
for(int i=0; i<3; i++){
cout<<arr[i] <<" ";
}

update(arr,3);

cout<<" Array in the main " <<endl;
for(int i=0; i<3; i++){
cout<<arr[i] <<" ";
}
return 0;
}