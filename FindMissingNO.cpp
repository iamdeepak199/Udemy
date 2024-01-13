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
    int n,sum=0;
    cout<<"Enter the size of the array :";
    cin>>n;
    cout<<n<<endl;
    int ans=(n*(n+1)/2);
   int arr[n];
    cout<<"Enter the Elements of the array : "<<endl;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
     cout<<"Enterd array Is : "<<endl;
     for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl<<"Total Sum of all digits Up to n-1 : "<<sum<<endl;
    cout<<"Total Sum of all digits Up to n : "<<ans<<endl;
    ans=ans-sum;
    cout<<"Missing Number in the array Will be : "<<ans;
}