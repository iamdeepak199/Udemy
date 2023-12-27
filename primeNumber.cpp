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
    cout<<"Enter the Number to find is Prime or not ? : ";
    cin>>N;
    cout<<N<<endl;
    for(int i=2;i<N-1;i++){
        if(N%i==0){
            cout<<N<<" is not a Prime :";
            break;
        }
        else{
            cout<<N<<" Is a Prime number :"<<endl;
            break;
        }
    }
   
    }