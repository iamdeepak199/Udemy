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
    int n,key,count=0;
    cin>>n>>key;
    cout<<"size of the array "<<n<<" & Key IS : "<<key<<endl;
    int A[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
     for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
        if (A[i]==key)
        {
         count++;
        }
        
       
    }
      cout<<endl<<"Occurrence Of Enterd element in the array : "<<count<<endl;
    
}