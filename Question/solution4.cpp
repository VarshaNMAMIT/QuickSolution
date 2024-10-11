4 /*4.	Write a Program to design a class having a static member function named ShowCount()
 which has the property of displaying the number of objects created of the class.
(Concept: Applications of the Static keyword)
*/
#include <iostream>

using namespace std;
class myclass{
private:
static int counts;
public:
myclass(){
counts++;}
static void showcount(){
cout<<"the value of count after creating obj is:"<<counts<<endl;
}};
int myclass::counts=0;//imp
int main()
{myclass c1;
myclass c2;
myclass c3;
myclass::showcount();
    return 0;
}
