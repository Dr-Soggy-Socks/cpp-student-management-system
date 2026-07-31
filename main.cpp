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

int main(){
    vector<Student> students;
    string name;
    int studentNumber;
    double averageNumber;
    char printAll;
    Student temp;
    

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
    }else{
        cout << "Goodbye";
    }
}