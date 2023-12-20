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
    int Units;
    int cost;
    cout<<"Enter the Units to find the electricity bill ammount :"<<endl;
    cin>>Units;
    if(Units<=100){
        cost=0;
        cout<<"  You are Great : "<<endl;
    }
    else if(Units<=200){
        cost=0+(Units-100)*5;
        cout<<" Keep it up :"<<endl;
    }
     else if(Units<=300){
        cost=0+ 100*5+(Units-200)*10;
        cout<<" Try to save energy :"<<endl;

    }
     else {
        cost=0+ 100*5 + 200*10 +(Units-300)*12;
        cout<<" Please avoid unnesscery use of eletricity & Try to save energy :"<<endl;

    }
    cout<<"Your Billing ammount Will be : In Rupee "<<cost<<"₹ Only/-";

}