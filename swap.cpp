#include<iostream>
#include<stdlib.h>
using namespace std;
void swap (int &a,int&b)
{
    int temp=a;
    a=b;
    b=temp;
} 
int main()
{
int a ,b;
cout<<"enter two numberss";
cin>>a>>b;
cout<<"a="<<a<<endl<<"b="<<b<<endl;
swap(a,b);
cout<<"value after swap"<<endl<<"a="<<a<<endl<<"b="<<b;
return 0;
}