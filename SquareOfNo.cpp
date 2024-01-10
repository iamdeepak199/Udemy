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
  int N;
  cout<<"Enter number to finds it's Sqaure :";
  cin>>N;
  cout<<N;
  N=N*N;
  cout<<endl<<"Square of number will be :"<<N;
}