#include <iostream>
using namespace std;

int deccreasing(int n){
  
if(n==0){
  return 0;
}
  cout<<n<<" ";
  deccreasing(n-1);
}

int Increasing(int n){
  
  if(n==0){
  return 0;
}
 Increasing(n-1);
  cout<<n<<" ";
}
int main() 
{
  int n;
  cout<<"Enter the Value Of N : ";
  cin>>n;
  cout<<n<<endl;

    cout<<"Increaing Array :";
    Increasing(n);
    cout<<endl;
    cout<<"Decreaing Array :";
    deccreasing(n);
   
  
}