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
int Fib(int);
int main(){
    fastio(true);
    int N;
    cout<<"Enter a numbers to find Fibonacci sequance :"<<endl;
    cin>>N;
    for(int i=1;i<=N;i++){
    cout<<" "<<Fib(i);
    }
}

int Fib(int N){
    if(N==1 || N==2)
    return 1;
   return (Fib(N-1)+Fib(N-2));
}