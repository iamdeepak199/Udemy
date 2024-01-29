#include <iostream>
#include<cstring>
using namespace std;


int main() {
   
   char greeting[1000]="Hello my name is Deepak Bhardwaj";
   char word[20];
   cin>>word;
   cout<<word<<endl;
   cout<<greeting<<endl;
   strstr(greeting,word);
    char *output=  strstr(greeting,word);
   if(output==NULL){
    cout<<word<<" Word Is Not Found";
   }
   else{
    cout<<word<<" Word is found ";
   }
   
   }
  
