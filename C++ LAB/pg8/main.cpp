/*8.	Write a C++ program to apply bubble sort on an array of integers and float using the concept of function template.
 (Concept: Class Template)*/
#include <iostream>
using namespace std;
template <typename T>void sorting(T a[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
           swap(a[j],a[j+1]);}}}
for(int i=0;i<n;i++){
    cout<<a[i]<<" "<<endl;;
}}
int main(){int n;
cout<<"enter n:"<<endl;
cin>>n;
int a[n];
float b[n];
    cout << "enter the elements of int array:" << endl;
    for (int i=0;i<n;i++){
            cin>>a[i];

    }
    sorting <int> (a,n);
    cout << "enter the elements of array:" << endl;
    for (int i=0;i<n;i++){
            cin>>b[i];

    }
    sorting <float> (b,n);
    return 0;
}
