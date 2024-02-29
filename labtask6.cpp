#include<iostream>
using namespace std;


class employee {
private:
    string empName;
    string title;
    int salary;
    int hours;

public:
    // Default constructor
    employee() {
    
    }

    // Parameterized constructor
    employee(int hours, int salary, string empName, string title) {
        this->empName = empName;
        this->title = title;
        this->salary = salary;
        this->hours = hours;
    }

    // Getters
    int getHours() {
        return hours;
    }

    int getSalary() {
        return salary;
    }

    string getEmpName() {
        return empName;
    }

    string getTitle() {
        return title;
    }

    // Setters
    void setHours(int hours) {
        this->hours = hours;
    }

    void setSalary(int salary) {
        this->salary = salary;
    }

    void setEmpName(string empName) {
        this->empName = empName;
    }

    void setTitle(string title) {
        this->title = title;
    }

    // Calculate salary based on hours worked
    void calSalary() {
        int regularRate = 10;
        int overtimeRate = 20;

        if (hours <= 40) {
            salary = regularRate*hours;
        } else {
            salary = regularRate*40 + overtimeRate*(hours-40);
        }
    }

    // Display employee information
    void display() {
        cout<< "Employee Name: " <<empName << endl;
        cout<< "Job Title: " <<title << endl;
        cout<< "Salary: " <<salary << endl;
        cout<< "Hours Worked: " <<hours << endl;
    }
};

int main() {
    int n;

    // Taking the number of employees
    cout<<"Enter the number of employees: ";
    cin>>n;

    // Creating an array of employee objects
    employee s[n];

    // Input employee details
    for (int i=0;i<n;i++) {
        string name, title;
        int salary, hours;

        cout<<"Enter your name: ";
        cin>>name;
        s[i].setEmpName(name);

        cout<<"Enter your job title: ";
        cin>>title;
        s[i].setTitle(title);

        cout<<"Enter your salary: ";
        cin>>salary;
        s[i].setSalary(salary);

        cout<<"Enter the working hours: ";
        cin>>hours;
        s[i].setHours(hours);
    }

    // Calculate salary for each employee
    for (int i=0; i<n; i++) {
        s[i].calSalary();
    }

    // Display employee information
    for (int i=0; i<n; i++) {
        s[i].display();
    }

    return 0;
}

