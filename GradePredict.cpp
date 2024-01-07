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
    char A;
    int N;
    cout<<"Enter Number Of Marks Obtained in All subject :"<<endl;
    cin>>N;
    if(N<=90){
           A=1;
    }
     if(N<=80){
           A=2;
    }
     if(N<=70){
           A=3;
    }
     if(N<=60){
           A=4;
    }
     if(N<=33){
           A=5;
    }
    if (N<33)
    {
        A=6;
    }

    switch(A)
    {
    case 1:
    cout<< "A Grade";    
        break;
    case 2:
     cout<< "B Grade";    
        break;
    case 3:
     cout<<"C Grade";    
        break;
    case 4:
     cout<< "D Grade";    
        break;
    case 5:
     cout<<"Permoted";    
        break;
    case 6:
     cout<<"FAIL";    
        break;
    
  
    }

  
}