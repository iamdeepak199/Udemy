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
    int Lower,Upper;
    cout<<"Enter Two number to find all prime numbers Between them :"<<endl;
    cin>>Lower>>Upper;
    for(int x=Lower+1;x<=Upper-1;x++){
    for(int i=2;i<x;i++){
        if(x%i==0){
       break;
        }
    
        cout<<x<<" ";
        break;
        
    }

    
}
}
