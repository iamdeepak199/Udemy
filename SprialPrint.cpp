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

cout<<endl;

   //4 variables
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    //Outer Loop (Traverse array boundary)
    while(startCol<= endCol and startRow <=endRow){

        //Start Row
        for(int col = startCol ; col<=endCol; col++){
            cout << A[startRow][col]<<" ";
        }

        //End Col
        for(int row=startRow + 1;row<=endRow;row++){
            cout << A[row][endCol]<<" ";
        }

        //End Row
        for(int col=endCol - 1; col>=startCol;col--){
            if(startRow==endRow){
                break;
            }
            cout<< A[endRow][col]<<" ";
        }   

        //Start Col
        for(int row = endRow-1; row >=startRow + 1;row--){
            //Avoid Duplicate Printing of elements
            if(startCol==endCol){
                break;
            }
            cout<< A[row][startCol] <<" ";
        }

        //update the variables to point to inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }


}
      
