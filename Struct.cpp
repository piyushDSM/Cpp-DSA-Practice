#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct student
{
    int roll;
    string name;
    int age;

    void studentDetail()
    {
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
        cout << "Roll " << roll << endl;
    }
};

int main()
{

    // struct student ob;
    student ob;
    ob.roll = 1;
    ob.name = "Piyush";
    ob.age = 23;

    student ob1 = {2, "Ashwani", 25};

    ob.studentDetail();
    ob1.studentDetail();
    return 0;
}