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
    cout<<" Enter the Number to find it's Reverse : ";
    cin>>N;
    cout<<N<<endl;
    cout<<"Reversed Number is  : ";
    while(N>0){
        int Last_digit =N%10;
        cout<<Last_digit;
        N=N/10;
    }

}