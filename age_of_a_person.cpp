#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"Enter age:";
	cin>>age;
	if((age>0)&&(age<12))
	cout<<"\nChild";
	else if((age>12)&&(age<19))
	cout<<"\nTeenager";
	else if((age>19)&&(age<64))
	cout<<"\nAdult";
	else
	cout<<"\nSenior";
}


