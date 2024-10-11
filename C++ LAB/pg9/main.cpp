/*9.	Write a C++ program to read and print employee information using multiple inheritance. Create 2 base classes namely BasicInfo and DeptInfo which contains getBasicInfo() and getDeptInfo() respectively to read the information.
(Concept: multiple inheritance.)
*/
#include <iostream>

using namespace std;
class basicinfo{
protected:
    char name[30];
    int id;
    char gender;
public:
    void getbasicinfo(){
    cout<<"enter your basic info,name,id,gender"<<endl;
    cin.getline(name,30);
    cin>>id;
    cin>>gender;
    cin.ignore();
    }};
class deptinfo{
protected:
    char deptname[10];
    int deptid;
public:
    void getdeptinfo(){
    cout<<"enter your dept info:"<<endl;
    cin.getline(deptname,10);
    cin>>deptid;
    }};
class employee : public basicinfo,public deptinfo{
public:
    void det(){
    cout<<"your name:"<<name<<"\nyour id"<<id<<"\nyour gender :"<<gender<<"\nyour dept name:"<<deptname<<"\nyour deptid:"<<deptid<<endl;
    }};
int main()
{employee e;
e.getbasicinfo();
e.getdeptinfo();
e.det();
    return 0;
}
