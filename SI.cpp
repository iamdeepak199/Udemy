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
    float p,r,t;
	int SI; //principle,rateof intrest,time
    cout<<"Enter Principel Ammount,Rate of intrest & Time: TO find Simple intrest :"<<endl;
    cin>>p>>r>>t;
    cout<<"Principel Amount is: "<<p<<endl;
    cout<<"Rate of intrest is: "<<r<<endl;
    cout<<"Time is :" <<t<<endl;
    SI=(p*r*t)/100;
    cout<<"SIMPLE INTREST WILL BE :"<<SI;
}