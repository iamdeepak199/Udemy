#include <iostream>
using namespace std;


int BitManuplation(int n ,int i){
    int mask = (1<<i);
    return (mask & n) > 0 ? 1:0;
}
int ClearBit(int &n,int i){
    int mask=~(1<<i);
    n=n & mask;
}
int UdateBit(int &n,int i,int val){
    ClearBit(n,i);
    int mask =(val<<i);
    n=n | mask;
}
int main() {
   
   int n,i;
   cin>>n>>i;
   cout<< "Orignal number : "<<n<<endl;

   UdateBit(n,i,1);
   cout<<"New Number Is : "<<n;
}