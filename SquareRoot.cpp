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
    int n;
    cin>>n;
     cout<<"Enter a number to find it's Square Root : "<<n<<endl;
     double result = sqrt(n);
      cout<<endl<<"Square Root Of Givrn NUmber Is : "<<result<<endl;
    
}