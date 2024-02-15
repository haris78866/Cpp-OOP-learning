#include<iostream>
#include<string>

using namespace std;
#define total 300

struct studentData {
    string name[3];
    int marks[3];
};

studentData inputdata() {
    studentData student;
    
    for (int i = 0; i < 2; i++) {
        cout << "Enter the student name " << i+1 << " : " << endl;
        cin >> student.name[i];

        for (int j = 0; j < 3; j++) {
            cout << "Enter the marks (course) " << j+1 << " : ";
            cin >> student.marks[j];   
        }
    }
     
    return student;
}

void displayData(const studentData &student) {
    for (int i = 0; i < 2; i++) {
        cout << "Student name " << i+1 << " : " << student.name[i] << endl;

        for (int j = 0; j < 3; j++) {
            cout << "Marks for course " << j+1 << " : " << student.marks[j] << endl;
        }
    }
}

void changeMarks(studentData &student, int subjectIndex, int newMarks) {
    if (subjectIndex >= 0 && subjectIndex < 3) {
        student.marks[subjectIndex] = newMarks;
        cout << "Marks for subject " << subjectIndex+1 << " changed to new marks " << newMarks << endl; 
    } else {  
        cout << "Invalid index number!" << endl;
    }
}

int average(const studentData &student) {
    int sum = 0;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += student.marks[j];
        }
    }

    return sum / total;
}

int main() {
    studentData student;
    int choice, subjectIndex, newMarks, avg;

    do {
        cout << "---------------MENU---------------" << endl;
        cout << "1) Display Data   : " << endl;
        cout << "2) Calculate Avg  : " << endl;
        cout << "3) Change Marks   : " << endl;
        cout << "0) Exit           : " << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                student = inputdata();
                displayData(student);
                break;
            case 2:
                avg = average(student);
                cout << "Average : " << avg << endl;
                break;
            case 3:
                cout << "Enter the subject index : ";
                cin >> subjectIndex;
                cout << "Enter new marks (change marks) : ";
                cin >> newMarks;
                changeMarks(student, subjectIndex, newMarks);
                break;
            default:
                if (choice != 0) {
                    cout << "Please enter a valid choice. " << endl;
                }
                break;
        }
    } while (choice != 0);

    return 0;
}

