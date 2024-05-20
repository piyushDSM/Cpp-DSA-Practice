#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int height;
    int weight;

public:
    int getAge(int b)
    {
        return this->age = b;
    }
    void setAge( int a){
        this-> age = a;
    }
    void setweight(int w)
    {
        this->weight = w;

    }
};

class Male : public Human
{

public:
    string color;

    void sleeping()
    {
        cout << "male is sleeping";
    }
};

int main()
{
    Male obj1;
    
    obj1.getAge(22);
    cout<< obj1.age <<endl;
    cout<< obj1.height<<endl;
    cout<< obj1.weight<<endl;
    obj1.sleeping();

    
    return 0;
}