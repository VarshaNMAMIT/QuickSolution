/*2.	Write a C++ program with two classes ABC and XYZ with one integer data member in each class. Write member functions to read and display, place a friend function called max() in these classes which takes the data members of these classes and computes a maximum of two data members.
(Concept: Friend function and Reference variable.)
*/
#include <iostream>
using namespace std;
class XYZ;
class ABC{
private: int a;
public:
    void read(){
    cout<<"enter value of number 1:"<<endl;
    cin>>a;
    }
    void display(){
    cout<<"value of a:"<<a<<endl;
    }
    friend void maxs(ABC,XYZ);};
class XYZ{
private: int b;
public:
    void read(){
    cout<<"enter value of number 2:"<<endl;
    cin>>b;
    }
    void display(){
    cout<<"value of b:"<<b<<endl;
    }
    friend void maxs(ABC,XYZ);};
    void maxs(ABC m,XYZ n){
        int l;
        l=max(m.a,n.b);
        cout<<"max is:"<<l<<endl;
    }
int main()
{
    ABC abc;
XYZ xyz;
abc.read();
xyz.read();
maxs(abc,xyz);
    return 0;
}
