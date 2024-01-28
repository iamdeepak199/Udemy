#include<iostream>
#include "LinearSearch.h"
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
    char ch;
    ch=cin.get();
    cout<<"Enter a Character Value To find what it is : "<<endl;

    if(ch== ' ' || ch=='\n'){
        cout<<" Entered Character is a Whitespace : "<<ch<<endl;
    }
    else if (ch >='A'  && ch<='Z')
    {
        cout<<" Entered Character is a Alphabet In Upper Case : "<<ch<<endl;
    }
     else if (ch >='a'  && ch<='z')
    {
        cout<<" Entered Character is a Alphabet In Lowwer case : "<<ch<<endl;
    }
     else if (ch >='0'  && ch<='9')
    {
        cout<<" Entered Character is a Number : "<<ch<<endl;
    }
    else{
        cout<<"Entered Character is a Special Character : "<<ch<<endl;
    }
    
   
}
      
