#include<bits/stdc++.h>
#include<iostream>

using namespace std;

vector<int> moveZeros(int n, vector<int> a){

vector<int> temp;

for(int i = 0; i<n; i++){
    if (a[i] != 0){
        temp.push_back(a[i]);
    }   
}

int nz = temp.size();

for(int i = 0; i<nz; i++){
    a[i]=temp[i];
}

for(int i = nz; i<n; i++){
    a[i] = 0;
}
return a;
}

int main()
{
vector<int> arr = {1,0,2,3,0,1,0,1};

int n = 8;

vector<int> ans = moveZeros(n, arr);

for( auto &it : ans){
 cout<<it<< " ";
}

return 0;
}