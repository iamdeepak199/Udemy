#include <iostream>
using namespace std;



int SoretedArray(int A[],int n){
  if(n==1 or n==0){
    return 1;
  }
  if(A[0]<A[1] and SoretedArray(A+1,n-1)){
    return 1;
  }
  return 0;
}
int main() 
{
  int n;
  cin>>n;
   int A[n];
   for(int i=0;i<n;i++){
     cin>>A[i];
   }
   cout<<"Enter Array : "<<endl;
    for(int i=0;i<n;i++){
     cout<<A[i]<<" ";
   }
    int X=SoretedArray(A,n);
    cout<<endl;
    if(X==0){
      cout<<"NOT Soreted Array : "<<endl;
    }
    else{
      cout<<"Soreted Array : "<<endl;
    }
  
}