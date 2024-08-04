#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    // int x = 20;
    // int *ptr;
    // ptr =&x; // Or  int *ptr = &x

    // cout<<ptr<<endl; // ADDRESS
    // cout<<*ptr; //VALUE

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << i << endl; // value of i
    cout << *p << endl;
    cout << **p2 << endl;

    cout << endl;

    cout << &i << endl; // address of i
    cout << p << endl;
    cout << *p2 << endl;

    cout << endl;

    cout << &p << endl; // address of p
    cout << p2;

    return 0;
}