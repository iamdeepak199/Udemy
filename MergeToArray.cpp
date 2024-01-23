#include<iostream>
#include "LinearSearch.h"
using namespace std;

void fastio(bool read = false) {
	if(read) {
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
		freopen("error.txt","w",stderr);
		#endif
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return;
}

int main(){
    fastio(true);
   int A[]={1,2,3,4,5};
   int B[]={10,20,30,40,50};
  
 int A1=sizeof(A)/sizeof(int);
  int B1=sizeof(B)/sizeof(int);
   
  int c1=A1+B1;


   int c[c1];
    cout<<"First Array : "<<endl;
   for(int i=0;i<A1;i++){
    c[i]=A[i];
    cout<<A[i]<<" ";
   }
    cout<<endl<<"Second Array : "<<endl;
 for(int i=0;i<A1;i++){
    c[A1+i]=B[i];
    cout<<B[i]<<" ";
   }
 cout<<endl<<"Merged Array : "<<endl;
    for(int i=0;i<c1;i++){
        cout<<c[i]<<" ";
    }
  }
