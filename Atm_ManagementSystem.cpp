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
    float Balance;
    int Deposite;
    int Widhrall;
  int Pin,N;
  Balance=Balance+Deposite;
  cout<<"Enter the Pin Number which is Provided by Bank :"<<endl;
  cin>>Pin;
  if(Pin==2201){
    cout<<endl<<"             WELCOME TO BANK "<<endl;
    cout<<endl<<"  Please Select One Of the Option  "<<endl;
    cout<<endl<<"1)Bank Balance"<<endl;
    cout<<endl<<"2)Cash Widhrall"<<endl;
    cout<<endl<<"3)Details Of Bank"<<endl;
    cout<<endl<<"4)Deposite  "<<endl;
    cin>>N;

    switch (N)
    {
    case 1:
         cout<<endl<<"Your Bank Balance Is "<<Balance<<endl;
         cout<<endl<<"          Thanks For Visit        "<<endl;
          cout<<endl<<"         😊😊Have a Good Day😊😊         "<<endl;
        break;
    case 2:
           cin>>Widhrall;
          Balance=Balance-Widhrall;
          cout<<endl<<Widhrall<<"₹₹/- Successfuly Widhtrall :"<<endl;
         cout<<endl<<"          Thanks For Visit        "<<endl;
          cout<<endl<<"         😊😊Have a Good Day😊😊         "<<endl;
        break;
    case 3:
         cout<<endl<<"Account Holder Name Is : Deepak Bhardwaj "<<endl;
         cout<<"Account Number : 05017704421 "<<endl;
         cout<<"Avilable Balance :"<<Balance<<endl;
         cout<<endl<<"          Thanks For Visit        "<<endl;
         cout<<endl<<"         😊😊Have a Good Day😊😊         "<<endl;
        break;
     case 4:
        cin>>Deposite;
         cout<<endl<<"Account Holder Name Is : Deepak Bhardwaj "<<endl;
         cout<<"Account Number : 05017704421 "<<endl;
         cout<<"Avilable Balance :"<<Deposite<<" ₹₹/-"<<endl;
         cout<<endl<<"          Thanks For Visit        "<<endl;
         cout<<endl<<"         😊😊Have a Good Day😊😊         "<<endl;
        break;    
        
    
    default:
       cout<<"Please Enter Vaild Choice :";
        return 0;
    }
  }
  else{
    cout<<" WRONG PIN "<<endl;
  }

}