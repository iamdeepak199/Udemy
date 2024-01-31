#include <iostream>
#include<string>
using namespace std;
int main() {
     string Paragraph="/*Hello My name is Deepak :*/";
     cout<<"Comment String :"<<Paragraph<<endl;
     int idx1=Paragraph.find("/*");
     int idx2=Paragraph.find("*/");

     cout<<"Index of /* "<<idx1<<endl;
     cout<<"Index of */ "<<idx2<<endl;

     int start=idx1+2;
     int len=idx2-start;
     cout<<"Uncomment String :";
     cout<<Paragraph.substr(start,len);
      
}