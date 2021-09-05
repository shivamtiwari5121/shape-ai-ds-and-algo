#include<iostream>
using namespace std;
void fab(int a)
{
      int t=0;
      int t1=1;
      int nextTerm;
      for(int i=0; i<a; i++)
      { 
            cout<<t;
            nextTerm=t+t1;
            t=t1;
            t1=nextTerm;



      }
}
   
int main(){

      int n; 
      cin>>n;
   
      fab(n);
      
return 0;
}