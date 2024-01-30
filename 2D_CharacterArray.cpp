#include <iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main() {
     char arr[][10]={
        "one",
        "Two",
        "There",
        "Four",
        "Five",
     };
     cout << "2D Character array : " <<endl;
      
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}