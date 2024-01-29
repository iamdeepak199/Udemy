#include <iostream>
using namespace std;

int main() {
   
   int x=0,y=0;
   char ch=cin.get();
   cout<< "Total Distance Coverd in Direction : "<<endl;
   while(ch!='\n'){
      cout<<ch<<" ";
     switch(ch){
        case'N': y++; break;
        case'S': y--; break;
        case'E': x++; break;
        case'W': x--; break;
     }
     ch=cin.get();

   }
   cout<<endl<<"Shortest Path will be : "<<endl;
    cout <<"Distance on X-aixs : "<<x<<" Distance on Y-aixs : "<<y<<endl;
   


}