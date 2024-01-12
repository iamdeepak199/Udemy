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
  int Power=1;
  cout<<"Enter theBinary number to finds it's Decimal digit:"<<endl;
  cin>>N;
  cout<<"Binary Of: "<<N<<" TO ";
  while(N>0){
	int Last_digit = N%10;
	Sum+=Last_digit*Power;
    Power=Power*2;
   
	N=N/10;     
  }

  cout<<" Decimal Is : "<<Sum;


}