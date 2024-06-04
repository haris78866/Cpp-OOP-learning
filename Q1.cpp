#include<iostream>
#include<string>
using namespace std;


class oriion_space_station_23_0573 {
private:
string choice;


public:

oriion_space_station_23_0573(string choice) : choice(choice){
}



string *tools;
string *supplies;
string *artifacts;
string *repair;

int n;

void add_tools(string *tools,string *supplies,string *articrafts,string *repair){

cout<<"Enter the no of items you wanna add :"<<endl;
cin>>n;
tools=new string[n];
supplies=new string[n];
artifacts=new string[n];
repair=new string[n];

for(int i=0;i<n;i++){
cout<<"Enter the tools "<<endl;
cin>>tools[i];
cout<<"Enter the supplies :"<<endl;
cin>>supplies[i];
cout<<"Enter the artifacts "<<endl;
cin>>artifacts[i];
cout<<"Enter the repair "<<endl;
cin>>repair[i];
}
}

void start(string choice){
if(choice == "Y" || "y"){
do{
cout<<"1)You wanna add to inventory :"<<endl;
cout<<"2)select category (tools , supplies, articrafts , repair material ):"<<endl;
cout<<"End game : "<<endl;
int c;
cout<<"Enter your choice "<<endl;
cin>>c;
int no;
switch(choice){

case 1 :
       add_tools(tools,supplies,articrafts,repair);
       break;
case 2 :
 
       cout<<"Enter the num "<<endl;
       cin>>no;
      if(no==1){
       for(int i=0;i<n;i++){
      cout<<"Avalible Tool :"<<tools[i]<<endl;
      }
      cout<<"Enter  the index no which do you wnat respect to 0 "<<endl;
      cin>>ind1;
      
      }
      else if(no==2){
    for(int i=0;i<n;i++){
      cout<<"Avalible suuplies :"<<supplies[i]<<endl;
      }
      }
      else if(no==3){
    for(int i=0;i<n;i++){
      cout<<"Avalible Articfacts :"<<artifacts[i]<<endl;
      }
      }
      else if(no==4){
    for(int i=0;i<n;i++){
      cout<<"Avalible repair material  :"<<repair[i]<<endl;
      }
      }
      else {
   cout<<"no more choice avalible :"<<endl;
     }
       break ;
      
      
      
}



};


int main(){




return 0;
}

