#include <iostream>
using namespace std;

int Fib(int n){
    if(n==1 || n==2){
        return 1;
    }
   else{
       return (Fib(n-1)+Fib(n-2));
   }
}
int main() {
   int n=10;
   cout << "Enter a number to find it's Fibonaci : "<<endl;
   //cin>>n;
   cout<<"Fibonaci Of : "<<n<<" Is : "<<Fib(n);
  
}