#include <iostream>
using namespace std;
int main() {
   int count=0;
   int n;
   cin>>n;
   cout<< "Enter A number to find it's bit : "<<n<<endl;
  while(n>0){
      int Last_bit=(n&1);
      count+=Last_bit;
      n=n>>1;
      
  }
  cout<<"Count of Bit is : "<<count;
}