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
    int count=0;
    int n;
    cin>>n;
    cout<<"Enter the size of the array : "<<n<<endl;
    int A[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
     for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
     for(int i=0;i<n;i++){
        if(A[i]==1)
        count++;
    }


    cout<<endl<<"Total number of 1's in the array Is : "<<count<<endl;
}