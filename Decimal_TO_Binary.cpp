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
  cout<<"Decimal Number IS "<<N<<" TO ";
while(N>0){
    int rem=N%2;
    Sum+=Power*rem;
    Power=Power*10;
    N=N/2;
}

  cout<<" & Binary will be : "<<Sum;


}