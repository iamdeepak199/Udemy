#include <iostream>
using namespace std;
int main() {
    int n,a;
   int ans=1;
   cin>>n>>a;
   cout<< "Enter A number to find it's bit : "<<n<<endl;
  while(n>0){
      int Last_bit=(n&1);
     if(Last_bit){
         ans =ans*a;
     }
     a= a*a;
      n=n>>1;
      
  }
  cout<<"Count of Bit is : "<<ans;
}