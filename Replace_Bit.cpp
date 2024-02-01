#include <iostream>
using namespace std;


int ClearBit(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=mask&n;
}
int ReplaceBit(int &n,int i,int j,int m){
    ClearBit(n,i,j);
   int mask=(m<<i);
   n=n | mask;
}


int main() {
   
   int n,i;
   int j=3,m=2;
   cin>>n>>i;
   cout<< "Orignal number : "<<n<<endl;

   ReplaceBit(n,i,j,m);
   cout<<"New Number Is : "<<n;
}