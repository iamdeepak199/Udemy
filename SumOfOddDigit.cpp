#include<iostream>
#include <iomanip>
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
  int N,Sum=0;
  cout<<"Enter the number to finds it's digit sum :"<<endl;
  cin>>N;
  cout<<N;
  while(N>0){
	int Last_digit = N%10;
    if(N%2!=0){
	Sum=Sum+Last_digit;
    }
	N=N/10;     //Update the no.
  }

  cout<<endl<<"Sum of digits will be :"<<Sum;


}