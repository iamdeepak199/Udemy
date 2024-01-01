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
    int X,Y;
    cout<<"Enter Two numbers to find it Which one is Largest:"<<endl;
    cin>>X>>Y;
    if(X>Y){
        cout<<X<<" Is a Greater then : "<<Y;
    }
    else{
        cout<<Y<<" Is a Greater then : "<<X;
    }

}