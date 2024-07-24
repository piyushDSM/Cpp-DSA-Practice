#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

int x = 20;
int *ptr;
ptr =&x; // Or  int *ptr = &x

cout<<ptr<<endl; // ADDRESS
cout<<*ptr; //VALUE

return 0;
}