/*7.	Write a C++ program to create a class Data with integer, character and float data members.
Demonstrate Constructor Overloading on this class with all types of constructors including default argument constructor.
(Concept: Constructor Overloading)
*/
#include <iostream>

using namespace std;
class data{
public:
    int a;
    char b;
    float c;

    data(){
    a=1;
    b='a';
    c=3.44;}
    data(int x,char y,float z){
        a=x;
        b=y;
        c=z;
  }
  data(int x,float z,char y='g'){
  a=x;
  c=z;
  b=y;}
  data(data& d){
  a=d.a;
  b=d.b;
  c=d.c;}};
int main()
{data d1;
int u;
char f;
float o;
    cout << "write int ,char float:" << endl;
    cin>>u>>f>>o;
    data d2(u,f,o);
    data d3(u,o);
    data d4=d2;
    cout<<" int char float values are:"<<d1.a<<" "<<d1.b<<" "<<d1.c<<" "<<d2.a<<" "<<d2.b<<" "<<d2.c<<" "<<d3.a<<" "<<d3.b<<" "<<d3.c<<" "<<d4.a<<" "<<d4.b<<" "<<d4.c<<endl;
    return 0;
}
