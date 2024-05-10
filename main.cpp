#include<iostream>
using namespace std;
class Professor;
class Student;
class Course;
class Admin{

};
class Professor{
    //Basic data members
    string name;
    string password;
    int uniId;
    static int counter;

    //Constructors
    Professor(){}
    Professor(string n):name(n){
        counter++;
        uniId=counter;
        password="default";
    }

    //Getters
    string getName(){
        return name;
    }
    int getUniId(){
        return uniId;
    }
    int getCount(){
        return counter;
    }

    //Setters
    void setName(string n){
        name=n;
    }

    //Functionalities
    void changePassword(string p){
        password=p;
    }
    void addAtendance(){

    }
    void addMarks(){

    }
    };
class Student{
    //Basic data members
    string name;
    string degree;
    string password;
    char section;
    int rollNo;
    int semester;
    static int counter;

    public:
    //Constructors
    Student(){}
    Student(string n,string d,char s,int sem):name(n),degree(d),section(s),semester(sem){
        counter++;
        rollNo=counter;
        password="default";
    }

    //Getters
    string getName(){
        return name;
    }
    string getDegree(){
        return degree;
    }
    char getSection(){
        return section;
    }
    int getRollNo(){
        return rollNo;
    }
    int getSemester(){
        return semester;
    }
    int getCount(){
        return counter;
    }
   
    //Setters
    void setName(string n){
        name=n;
    }
    void setDegree(string d){
        degree=d;
    }
    void setSection(char s){
        section=s;
    }
    void setSemester(int s){
        semester=s;
    }

    //Functionalities
    void changePassword(){

    }
    void displayFee(){

    }
    void displayMarks(){

    }
    void displayAttendance(){

    }
    void submitFeedback(){

    }
    void pickCourse(){

    }
    void dropCourse(){

    }
};
//Note:Extra class because Course has alot of characteristics and impacts
class Course{
    string name;
    char passOrFail;
    int creditHours;
    int courseNo;
    int fee;
    static int counter;

    //Constructor
    Course(string n,int ch,int feePerCredit):name(n),creditHours(ch){
        counter++;
        courseNo=counter;
        fee=creditHours*feePerCredit;
    }
};
int main(){

}
