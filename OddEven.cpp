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
    cout<<"Enter a number to find it Odd OR Even :"<<endl;
    cin>>N;
    if(N%2==0){
        cout<<N<<" Is a Even number:";
    }
    else{
        cout<<N<<" Is a Odd number:";
    }

}