#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
using namespace std;

void printAllCode(const vector<Student>& students){
    for(int i  = 0; i < size(students); i++){
        students[i].display();
    }
}

int main(){
    vector<Student> students;
    string name;
    int studentNumber;
    double averageNumber;
    int i = 0;
    char printAll;
    

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

        students[i].setName(name);
        students[i].setStudentNumber(studentNumber);
        students[i].setAverageMark(averageNumber);
    }

    cout << "Print all the student: ";
}