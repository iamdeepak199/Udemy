#include <iostream>
using namespace std;

bool comparePassword(char Password[],char expectedPassword[]){
    int i=0;
    while(Password[i]!='\0'){
        if(Password[i]!=expectedPassword[i]){
           return false;
        }
        i++;
}
return true;

}
int main() {
     char *expectedPassword="Deepak@1999";
    char Password[1000];
     cout << "Enter Your Password To Login :" <<endl;
     cin>>Password;
     cout<<"Entered Password Is : "<<Password<<endl<<endl<<endl;
      if(comparePassword(Password,expectedPassword)){
        cout<<"Login Successfull Becaues Entered Password Is Exact Same To The Stored Password In Database Which is : "<<expectedPassword<<":"<<endl;
      }
      else{
        cout<<"Wrong Password Please Try again ! "<<endl;
      }
}