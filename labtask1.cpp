#include<iostream>

using namespace std;

class Testscore {

private : 
int test1;
int test2;
int test3;

public :

Testscore(){
test1=0;
test2=0;
test3=0;
}
// setters

void test1(int t1)
{
test1=t1;
}

void test2(int t2)
{
test2=t2;
}

void test3(int t3)
{
test3=t3;
}
//   getters
int getTest1(){
return test1;
}

int getTest2(){
return test2;
}

int getTest3(){
return test3;
}



int average(){
int cal_avg;
cal_avg=(test1+test2+test3)/3;
return cal_avg;
}


};





int main()
{
Testscore  my;
int testFirst, testSecond,testThird;

cout<<"Enter the marks for test 1"<<endl;
cin>>testFirst;

cout<<"Enter the marks for test 2"<<endl;
cin>>testSecond;

cout<<"Enter the marks for test 3"<<endl;
cin>>testThird;

my.test1(testFirst);
my.test2(testSecond);
my.test3(testThird);

//cout<<"The avg of student  "<<my.average<<endl;

}
