#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

class car{

  private:
       string name, model,DL;
       float top_speed;
       int Price;
  public:
      
       void input(){
            cout<<"Enter Car Name: "<<endl;
            cin>>name;
            cout<<"Enter Car Model: "<<endl;
            cin>>model;
            cout<<"Enter Car DL Number : "<<endl;
            cin>>DL;
            cout<<"Enter Top Speed of Car: "<<endl;
            cin>>top_speed;
             cout<<"Enter Car Price: "<<endl;
            cin>>Price;
            cout<<endl;
       }
       void display(){
            cout<<"Name of car: "<<name<<endl<<"Model of Car: "<<model<<endl;
            cout<<"Car DL: "<<DL<<endl;
            cout<<"Top Speed: "<<top_speed<<" Mph"<<endl;
            cout<<"Car Price: "<<Price<<" Lakh Rupees "<<endl;
       }
};

int main(){
  car c1;
  c1.input();
  c1.display();
 
}   