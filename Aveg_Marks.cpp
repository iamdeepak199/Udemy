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
    float Avg_MArk;
    int Hindi,English,Maths,Science,Computer;
    cout<<"Enter the Marks of the student :"<<endl;
    cin>>Hindi>>English>>Maths>>Science>>Computer;
    Avg_MArk=(Hindi+English+Maths+Science+Computer)/5;
    cout<<"Aveg_Marks in Five Subjects will be : "<<Avg_MArk<<endl;
    cout<<"Hindi :"<<Hindi<<endl;
    cout<<"English :"<<English<<endl;
    cout<<"Maths :"<<Maths<<endl;
    cout<<"Science :"<<Science<<endl;
    cout<<"Computer :"<<Computer<<endl;

}