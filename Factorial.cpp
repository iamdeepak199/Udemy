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
   int N,Fact=1;
    cout<<"Enter a number to find it's Factorial ! : ";
    cin>>N;
    cout<<N<<endl;
    for(int i=1;i<=N;i++){
        Fact*=i;
    }
    cout<<"Factorial of a number is :"<<Fact;
   
    }