#include <iostream>
using namespace std;
int GCD(int a ,int b){
  
  if(a==b){
    return a;
  }
  if(a%b==0){
    return b;
  }
  if(a>b){
   return GCD(a%b,b);
    
  }
   else{
   return GCD(a,b%a);
    
  }
  
}

int main() 
{
   int a,b;
   cout<<"Enter two numbers to find GCD of two number : "<<endl;
   cin>>a>>b;
   cout<<"GCD of : "<<a<<" And "<<b<<" is : ";
   cout<<GCD(a,b);
   
}