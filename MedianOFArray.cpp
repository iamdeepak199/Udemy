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
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    cout<<n<<endl;
   int arr[n];
    cout<<"Enter the Elements of the array : "<<endl;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
     cout<<"Enterd array Is : "<<endl;
     for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
int Median=(n+1)/2;
 
 cout<<endl<<"Median of Array IS : "<<Median;
    
           
    
  }

