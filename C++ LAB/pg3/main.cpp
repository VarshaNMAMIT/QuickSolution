/*3.	Write a program to find the largest, smallest & second largest of three numbers.
(use inline function MAX and MIN to find largest & smallest of 2 numbers)
(Concept: Inline function)*/
#include <iostream>
using namespace std;
inline int MAX(int a,int b){
int l=max(a,b);
return l;
}
inline int MIN(int a,int b){
int l=min(a,b);
return l;
}

int main()
{int a,b,c;
cout<<"enter a and b and c:"<<endl;
cin>>a>>b>>c;
cout<<"Maximum of 3 elements is:"<<MAX(MAX(a,b),c)<<endl;
cout<<"Minimum of 3 elements is:"<<MIN(MIN(a,b),c)<<endl;
int sl,l,s;
l=MAX(MAX(a,b),c);
s=MIN(MIN(a,b),c);
if(l==a && s==b){
    cout<<"sl is:"<<c<<endl;
}
else if(l==b && s==c){
    cout<<"sl is:"<<a<<endl;
}
else{
    cout<<"sl is:"<<b<<endl;
}

    return 0;
}
