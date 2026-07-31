#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
using namespace std;

void printAllStudents(const vector<Student>& students){
    for(int i  = 0; i < size(students); i++){
        students[i].display();
        cout << '\n';
    }
}

void sortByGrade(vector<Student>& students){
    Student temp;
    for(int i = 0; i < size(students) - 1; i++){
        for(int j = 0; j < size(students) - i - 1; j++){
            if(students[j].getAverageMark() > students[j + 1].getAverageMark()){
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main(){
    vector<Student> students;
    string name;
    int studentNumber;
    double averageNumber;
    char printAll;
    Student temp;
    char sort;

    while(true){
        cout << "Enter name or quit/Quit to stop adding students: ";
        cin >> name;
        if(name == "quit" || name == "Quit"){
            cout << "All students have been entered." << '\n';
            break;
        }
        cout << "Enter Student Number: ";
        cin >> studentNumber;
        cout << "Enter Average Mark: ";
        cin >> averageNumber;

        temp.setName(name);
        temp.setStudentNumber(studentNumber);
        temp.setAverageMark(averageNumber);

        students.push_back(temp);
    }

    cout << "Print all the student [Y/N]: ";
    cin >> printAll;
    cout << '\n';
    printAll = toupper(printAll);
    if(printAll == 'Y'){
        printAllStudents(students);
        cout << '\n';
    }

    cout << "Sort the student data by average marks[Y/N]: ";
    cin >> sort;
    cout << '\n';
    printAll = toupper(sort);

    if(sort == 'Y'){
        sortByGrade(students);
        cout << "The highest achiever: " << students[0].getName() << '\n' ;
        cout << "Goodbye";
    }
}