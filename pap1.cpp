#include<iostream>
#include<string>
using namespace std;

class Testscore {
private:
int test;
public:
// default constructer
 Testscore(){
}


Testscore(int test){
this->test=test;
}

int gettest(){
return test;
}


void settest(int test){
this->test=test;
}

float avg;
void test_avg(){
avg=test/3;
}

//float x=test_avg();

void display();
};

void Testscore :: display (){
cout<<"Test "<<" : "<<test<<endl;
cout<<"Average   : "<<avg<<endl;
}


int main(){
Testscore s1[3];
int test;

cout<<"Enter the data of student :"<<endl;
for(int i=0;i<3;i++){
cout<<"Enter the test score  : "<<i+1<<endl;
cin>>test;
s1[i].settest(test);
}

cout<<"Stduent test score :"<<endl;
for(int i=0;i<3;i++){
s1[i].display();
}




return 0;
}

