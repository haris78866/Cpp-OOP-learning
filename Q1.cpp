#include<iostream>
#include<string>
using namespace std;

class dataType {
private:
string day;
public:

// default costructer
 dataType(){
 day="Sun";
}

// parameterized constructer
dataType(string day){
this->day=day;
}

// copy constructer

dataType(const dataType & other){
day=other.day;
}

// setters


void setday(string day){
this->day=day;
}

// getter 

string getday(){
return day;
}

// print the day
void printday() {
cout<<"Day : "<<day<<endl;
}

// next day 
string getnextday(){
 if(day=="Sun")
        return "Mon";
 else if(day=="Mon")
        return "Tue";
 else if(day=="Tue")
        return "Wed";            
 else if(day=="Wed")
        return "Thu";      
 else if(day=="Thu")
        return "Fri";
 else if(day=="Fri")
        return "Sat";
 else if(day=="Sat")
        return "sun";
 else 
      cout<<"Invalid Day :";
}

// previous day 

string getpreviousDay(){
  if(day=="Sun")
        return "Sat";
 else if(day=="Sat")
        return "Fri";
 else if(day=="Fri")
        return "Thu";            
 else if(day=="Thu")
        return "Wed";      
 else if(day=="Wed")
        return "Tue";
 else if(day=="Tue")
        return "Mon";
 else if(day=="Mon")
        return "Sun";
 else 
      cout<<"Invalid Day :"<<endl;
}

string getdayafter(int numdays){
int index=0;
if(day=="Sun")
      index =0 ;
 else if(day=="Mon")
        index =1; 
 else if(day=="Tue")
       index =2;           
 else if(day=="Wed")
        index =3;       
 else if(day=="Thu")
        index =4; 
 else if(day=="Fri")
        index =5;
 else if(day=="Sat")
        index =6;
 
 int newIndex =(index +numdays)%7;
 string days[7]={ "Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
 return days[newIndex];
}


// calling the destructer
~dataType(){
}

};


int main(){
// taking object dynamicallly
dataType *dayObj=new dataType();
char choice;
string newDay;
int numday;

do{
cout<<"a) Set Day :               "<<endl;
cout<<"b) Print the Day           "<<endl;
cout<<"c) Return the Day          "<<endl;
cout<<"d) Return the next Day     "<<endl;
cout<<"e) Return the previous day "<<endl;
cout<<"f) Calculate and return the day by adding days to the current day "<<endl;
cout<<"g) EXIT              :     "<<endl;
cout<<" Enter your choice :       "<<endl;
cin>>choice;

switch(choice){
      case 'a':
            cout<<"Enter a day :"<<endl;
            cin>>newDay;
            dayObj->setday(newDay);
      break;
      
      case 'b':
            dayObj->printday();
      break;
      
      case 'c':
            cout<<"Current Day :"<<dayObj->getday()<<endl;
      break;
      
      case 'd':
            cout<<"Next Day :"<<dayObj->getnextday()<<endl;
      break;
      
      case 'e':
             cout<<"Next Day :"<<dayObj->getpreviousDay()<<endl;
      break;
      
      case 'f':
            cout<<"Enter the num of days to  Add :"<<endl;
            cin>>numday;
            cout<<"New day after adding :"<<dayObj->getdayafter(numday)<<endl;
      break;
      
      case 'g':
       cout<<"EXIT :"<<endl;
      break;
      
default:
      cout<<"Invlaid choice :"<<endl;
      break;
     }            
}while(choice!='g');

// deallocating  dayObj
delete dayObj;

exit(0);
return 0;
}



