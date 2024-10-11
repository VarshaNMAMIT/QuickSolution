/*5.	Write a C++ program to find the volume of a cylinder, sphere and cube.
(Concept: Function overloading)
*/
#include <iostream>
using namespace std;
class sol{
public:
float volume(int r,int h){
return (3.14*r*r*h);}
float volume(int a){
return (a*a*a);
}
float volume(float r){
return (3.14*r*r*r*4)/3;}};

int main()
{sol s;
    int a,r,h;
    float R,v1,v2,v3;
    cout << "enter the dimensions of cube,cylinder and sphere:" << endl;
    cout<<"enter the side of a cube:"<<endl;
    cin>>a;
    cout<<"enter the radius and height of cylinder:"<<endl;
    cin>>r>>h;
    cout<<"enter the radius of sphere:"<<endl;
    cin>>R;
    v1=s.volume(r,h);
    v2=s.volume(R);
    v3=s.volume(a);
    cout<<"volume are:"<<v3<<"  "<<v2<<"  "<<v1<<endl;

    return 0;
}
