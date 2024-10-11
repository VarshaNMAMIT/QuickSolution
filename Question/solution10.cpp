/*10.	Write a C++ program to demonstrate the uses of constructors in derived class concepts. The three classes that can be created are Alpha, Beta and Gamma in this order having an “is-a” relationship. Create at least one data member and one member function in each class. That is n1 and putAlpha() in Alpha class, n2 and putBeta() in Beta class, n3 and putGamma() in Gamma class.
(Concept: Use of Constructors in Derived Classes.)
*/
#include <iostream>
using namespace std;
class alpha{
protected:
    int n1;
public:
alpha(int x){
n1=x;
}
void putalpha(){
cout<<"alpha is contructed"<<endl;
cout<<"value of x:"<<n1<<endl;}
    };
class beta{
protected:
    int n2;
public:
beta(int y){
n2=y;
}
void putbeta(){
cout<<"beta is contructed"<<endl;
cout<<"value of y:"<<n2<<endl;}
    };
class gamma : public alpha,public beta{
protected:
int n3;
public:
gamma(int x,int y,int z):alpha(x),beta(y)//imp{
{n3=z;
}
void putgamma(){
cout<<"gamma is contructed"<<endl;
cout<<"value of z:"<<n3<<endl;}};
int main()
{
gamma g(2,3,4);
g.putalpha();
g.putbeta();
g.putgamma();
return 0;}