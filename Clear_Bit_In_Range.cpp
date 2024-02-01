#include <iostream>
using namespace std;


int ClearBit(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=mask&n;
}


int main() {
   
   int n,i;
   int j=3;
   cin>>n>>i;
   cout<< "Orignal number : "<<n<<endl;

   ClearBit(n,i,j);
   cout<<"New Number Is : "<<n;
}