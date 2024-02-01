#include <iostream>
using namespace std;

int main() {
   
   int n;
   cin>>n;
  
   cout<< "Enter a number to find it is a odd or even : "<<endl;
   cout<<n<< " ";
   if(n&1){
       cout<<" Is a Odd number :"<<endl;
   }
   else{
       cout<<" Is a Even number :"<<endl;
   }
  
}