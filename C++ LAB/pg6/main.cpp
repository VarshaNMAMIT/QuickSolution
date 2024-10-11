/*Write a C++ program to demonstrate the working of a copy constructor. Implement a class called Point
with private data members X and Y as the points and getX() and getY() are the getter functions to get the values and
print the same using the main() function.
(Concept: Copy constructor)*/
#include <iostream>
using namespace std;
class point{
private:
    int x,y;
public:
    point(int a,int b){
        x=a;
        y=b;
    }
    point(point& p1){
    x=p1.x;
    y=p1.y;}
    int getx(){
    return x;}
    int gety(){
    return y;}
    };

int main()
{point p1(5,6),p2=p1;
    cout << "x and y are:"<<p1.getx()<<p1.gety()<<p2.getx()<<p2.gety()<< endl;
    return 0;
}
