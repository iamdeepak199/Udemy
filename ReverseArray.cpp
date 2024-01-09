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
    cout<<" Enter the Number of elements in Array & Size : "<<endl;
    cout<<" Size of Array is "<<N<<endl;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
     cout<<" Elements of Array is "<<endl;
     for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<" Reversed Array is "<<endl;
   for(int i=N-1;i>=0;i--){
       cout<<arr[i]<<" ";
   }

}