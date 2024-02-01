#include <iostream>
using namespace std;
int main() {
    int n,p=1;
    int ans=0;
   cin>>n;
   cout<< "Enter A number to find it's binary bit : "<<n<<endl;
  while(n>0){
      int Last_bit=(n&1);
    ans+= p*Last_bit;
    p=p*10;
     n=n>>1;
      
  }
  cout<<"Binary number Is "<<ans;
}