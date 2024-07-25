#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct student
{
    int age;
    string name;
    int roll;

    void display()
    {
        cout << "Age is " << age << endl;
        cout << "Name is " << name << endl;
        cout << "Roll is " << roll;
    }
};

int main()
{
    // struct student piyush;
    
    student piyush;
    piyush.age = 23;
    piyush.name = "Piyush Chaubey";
    piyush.roll = 12;

    student ashwani = {25, "Ashwani Chaubey", 11};

    piyush.display();
    cout << endl;
    ashwani.display();

    return 0;
}