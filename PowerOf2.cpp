#include <iostream>
using namespace std;
int main() {
   
   int n;
   cin>>n;
   cout<< "Enter a number to find Power of 2 : "<<n<<endl;
   if((n&(n-1))==0){
       cout<<"Yes it is Power of 2 :"<<endl;
   }
   else
   {
       cout<<"No it is Power of 2 :"<<endl;
   }
}