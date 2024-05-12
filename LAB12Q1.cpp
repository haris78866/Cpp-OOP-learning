#include<iostream>
#include<string>
using namespace std;

class DOB{
private:
int day;
int month;
int year;

public: 

DOB(int d, int m, int y) : day(d) , month(m),year(y){
}


void print(){
cout<<day<<"/"<<month<<"/"<<year<<endl;
}

int getmonth(){
return month;
}
};

class Contact{
private:
DOB b;
string name ;
string num;
string email;
public: 
Contact(string n,string num,string em, DOB dob_o ) : name(n),num(num),email(em), b(dob_o) {
}


void display() {
        cout<<"Name:"<<name<<"Phone:"<<num <<"Email:"<<email;
         b.print();
        cout<<endl;
    }

DOB getDOB(){
return b;
}

string getname(){
return name;
}

};

class phonebook{
private:
Contact  *c;
int count;

public:
phonebook(int size) : count(0){
c=new Contact[size];
}




void addcontacts(Contact contact){
c[count++]=contact;
}

void sameDOB(int month){
for(int i=0;i<count;i++){
 if(c[i].getDOB(). getmonth()==month){
cout<<c[i].getname()<<endl;
}
}
}

~phonebook(){
delete[] c;
}

};


int main(){
phonebook p(3);


p.addcontacts(Contact("Alice", "1234567890", "alice@example.com", DOB(10, 4, 1990)));
p.addcontacts(Contact("Bob", "9876543210", "bob@example.com", DOB(15, 5, 1985)));
p.addcontacts(Contact("Charlie", "5555555555", "charlie@example.com", DOB(20, 4, 1995)));

// printing the birthday with january 5 
 cout << "Contacts with birthday in April:" << endl;
    p.sameDOB(4);

return 0;
}
//
