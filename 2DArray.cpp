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
    int n,m;
    int A[100][100];
     cin>>n>>m;
    cout<<"Enterd size of 2D Array will be:"<<n<<"*"<<m<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cin>>A[i][j];
            }
        }
       cout<<"Enterd 2D Array IS :"<<endl;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cout<<A[i][j]<<" ";
            }
            cout<<endl;

   }
    }
