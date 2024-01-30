#include <iostream>
using namespace std;
int main() {
    char arr[1000];
    char largest[1000];
    int n;
     cout << "Enter the total number of strings :" <<endl;
    cin>>n;
    int len=0;
    for(int i=0;i<=n;i++){
        cin.getline(arr,1000,'\n');
        int currentLength= strlen(arr);
        if(currentLength > len){
            len=currentLength;
            strcpy(largest,arr);
        }
        cout<<arr<<endl;
        
       
    }
    cout<<"Largest Sting is : "<<largest<<endl;
    cout<<"Largest Sting Length is : "<<len<<endl;
   
    
}