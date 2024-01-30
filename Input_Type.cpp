#include <iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main() {
     char word[100];
     cout << "Enter a String Which may br contains Symbol,Alphabets,Digits ect :" <<endl;
     cin.getline(word,1000,'$');
     cout<<word<<endl;
     int Alphabets=0,Symbol=0,Digits=0,Whitespace=0;
     for(int i=0;i<word[i]!='\0';i++){
         char ch=word[i];
         if(isalpha(ch)){
            Alphabets++;
         }
         else if(isdigit(ch)){
            Digits++;
         }
         else if(isspace(ch)){
            Whitespace++;
         }
     }
     cout<<"Alphabets Are in String : "<<Alphabets<<endl;
     cout<<"Digits Are in String : "<<Digits<<endl;
     cout<<"Whitespace Are in String : "<<Whitespace<<endl;
    Symbol= (strlen(word)-(Alphabets + Digits + Whitespace));
     cout<<"Special Symbol Are in String : "<<Symbol<<endl;

    
      
}
