#include<iostream>
using namespace std;
bool Prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
     return false;}
    } 
    return true;
}





int main()
{ int n;
cout<<"en";
cin>>n;

    if(Prime(n))
    {
        cout<<"prime";}

else {
    cout<<"not prime";
}
 return 0;
}