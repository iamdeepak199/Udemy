#include<iostream>
#include<cmath>
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
   float N;
    cout<<"Enter the Number to find it's Floor Value : ";
    cin>>N;
    cout<<endl<<"Floor Value of : "<<N<<" is "<< floor(N)<<endl;
    }