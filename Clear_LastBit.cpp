#include <iostream>
using namespace std;


int ClearBit(int &n,int i){
    int mask=(~0<<i);
    n=n & mask;
}


int main() {
   
   int n,i;
   cin>>n>>i;
   cout<< "Orignal number : "<<n<<endl;

   ClearBit(n,i);
   cout<<"New Number Is : "<<n;
}
