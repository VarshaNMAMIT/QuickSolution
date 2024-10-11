/*1.	Write a C++ program to read the data of N employees and compute the Net salary of each employee
(DA=52% of Basic and Income Tax (IT) = 30% of the gross salary). For that,
create an Employee class with Employee number, Employee name, Basic, DA, IT, Net Salary.
(Concept: Array of Objects)*/
#include <iostream>
using namespace std;
class employee{
private:
    char ename[20];
    int enume,basic;
    float da,it,net;
public:
    void read(){
    cout<<"enter your name:"<<endl;
    cin>>ename;
    cout<<"enter your id:"<<endl;
    cin>>enume;
    cout<<"enter basic salary:"<<endl;
    cin>>basic;
    }
    void netsalary(){
        da=0.52*basic;
        it=(basic+da)*0.3;
        net=(da+basic)-it;
        cout<<"net salary:"<<net<<endl;}};
int main()
{employee e[10];
int n;
cout<<"enter value of n:"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enter details of employee"<<i+1<<endl;
    e[i].read();
    e[i].netsalary();
}return 0;}
