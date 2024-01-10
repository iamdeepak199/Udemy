#include<iostream>
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
    int N;
    cin>>N;
    int arr[N];
    cout<<" Enter the Size of the array : "<<endl;
    cout<<" Size of Array is "<<N<<endl;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
      cout<<" Elements will be : "<<endl; 
     for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            for(int k=i;k<=j;k++){
        cout<<arr[k]<<" , ";
            }
        cout<<endl;
        }
        cout<<endl;
    } 
    
     int Sub=N*(N+1)/2;
      cout<<endl<<" Subarrays will be : "<<Sub<<endl; 
  
   
   }