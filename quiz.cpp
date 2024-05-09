#include<iostream>
#include<string>
using namespace std;


class Dayofyear {
private:

int day;


public:
// constructer  
Dayofyear(int day ) : day(day){      
}

// void show function  which show all of the yea according to the statement 
void show(){
if(day<=31){
cout<<"JAN  :"<<day<<"Day :"<<day<<endl;
}
else if(day>31 && day<=59 ){
cout<<"FEB :"<<day-31<<"  Day :"<<day<<endl;
}

else if(day>59 && day<=90 ){
cout<<"MARCH  :"<<day-59<<"Day :"<<day<<endl;
}
else if(day>90 && day<=120 ){
cout<<"APRAIL  :"<<day-90<<"Day :"<<day<<endl;
}
else if(day>120 && day<=151 ){
cout<<"MAY  :"<<day-120<<"Day :"<<day<<endl;
}
else if(day>151 && day<=181 ){
cout<<"JUNE  :"<<day-151<<"Day :"<<day<<endl;
}
else if(day>181 && day<=212 ){
cout<<"JULY :"<<day-181<<"Day :"<<day<<endl;
}
else if(day>212 && day<=242 ){
cout<<"AUG  :"<<day-212<<"Day :"<<day<<endl;
}

else if(day>242 && day<=273 ){
cout<<"SEP  :"<<day-242<<"Day :"<<day<<endl;

}
else if(day>273 && day<=303 ){
cout<<"OCT  :"<<day-273<<"Day :"<<day<<endl;
}
else if(day>303 && day<=334 ){
cout<<"NOV  :"<<day-303<<"Day :"<<day<<endl;
}

else if (day>334 && day<=365 ){
cout<<"DEC  :"<<day-334<<"Day :"<<day<<endl;
}

else {
cout<<"Sorry into next year !! "<<endl;
cout<<"Day "<<day<<endl;
}
}
 
};



int main(){


int day;
cout<<"Enter the day : "<<endl;
cin>>day;

Dayofyear d(day);

d.show();

return 0;
}

