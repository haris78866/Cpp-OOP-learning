#include<iostream>

using  namespace std;

class Popualtion{
int population;
int  birth;
int death;
 

public :

Popualtion(){
population=0;
birth=0;
death=0;
 }

Popualtion(int pop,int bir,int dea){
population=pop;
birth=bir;
death=dea;
 }
 
 float rate_of_birth(){
 float  b;
 b=(float)birth/population;
 return b;
 }

float rate_of_death(){
 float  d;
 d=death/population;
 return d;
 }
};
 
int main()
{

int  population,birth,death;
cout<<"Enter the total population :"<<endl;
cin>>population;

cout<<"Enter the total birth :"<<endl;
cin>>birth;

cout<<"Enter the total death :"<<endl;
cin>>death;


Popualtion calculate(population,birth,death);

cout<<"Birth Rate :"<<calculate.rate_of_birth()<<endl;
cout<<"Death Rate :"<<calculate.rate_of_death()<<endl;





return 0;
}
