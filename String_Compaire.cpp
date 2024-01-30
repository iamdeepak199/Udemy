#include <iostream>
#include<cstring>
using namespace std;

/*bool comparePassword(char Password[],char expectedPassword[]){
    int i=0;
    while(Password[i]!='\0'){
        if(Password[i]!=expectedPassword[i]){
           return false;
        }
        i++;
}
return true;

}*/
int main() {
     char Word1[100];
    char word2[100];
     cout << "Enter Two Words to Compaire Both Are Same Or Not ? " <<endl;
     cin>>Word1>>word2;
     cout<<"First Word IS : "<<Word1<<endl;
     cout<<"Secondt Word IS : "<<word2<<endl;
     int ans = strcmp(Word1,word2);
     if(ans==0){
        cout<<"Both Words Are Same : "<<endl;
     }
     else{
         cout<<"Both Words Are Not Same : "<<endl;
     }
      
}