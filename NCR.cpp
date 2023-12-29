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

 int factorial(int N){
    int Fact=1;
    for(int i=1;i<=N;i++){
        Fact*=i;
    }
      return Fact;
 }
 
 int Binomial_coffe(int N, int R){
  int ans=factorial(N)/(factorial(N-R)*factorial(R));
  cout<<"Factorial is :";
  return ans;

 }
 int factorial(int);
 int Binomial_coffe(int,int);
int main(){
    fastio(true);
   int N,R;
    cout<<"Enter the Value of N & R to find it's nCr : ";
    cin>>N>>R;
    cout<<N<<"!"<<" & "<<R<<"!"<<endl;
    cout<<Binomial_coffe(N,R);
    return 0;

}
    