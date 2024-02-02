#include <iostream>
using namespace std;

int Factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
   else{
       return (n*Factorial(n-1));
   }
}
int main() {
   int n=5;
   cout << "Enter a number to find it's Factorial : "<<endl;
   //cin>>n;
   cout<<"Factorial Of : "<<n<<" Is : "<<Factorial(n);
  
}