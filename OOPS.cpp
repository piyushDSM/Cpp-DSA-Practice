#include<iostream>
using namespace std;
class Piyush {
    private:
     int a ;
    public:

   int getter(){
    return a=a;
   }

   int setter(int b){
    return a = b;
   }

 

};
int main()
{
 
Piyush P;

cout<<"the value of a in Private " << P.getter()<<endl;
P.setter(10);
cout<<"the value of a in Private " << P.getter();

return 0;
}