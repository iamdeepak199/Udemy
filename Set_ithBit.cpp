#include <iostream>
using namespace std;


int BitManuplation(int n ,int i){
    int mask = (1<<i);
    return (mask & n) > 0 ? 1:0;
}

int main() {
   
   int n,i;
   cin>>n>>i;
   cout<< "Enter a number to find it's Bit on ith Position: "<<endl;
  
   cout<<" Number Is : "<<n<<" ith Bit : "<<i<<" ith Element stored : "<<BitManuplation(n,i);
  
}