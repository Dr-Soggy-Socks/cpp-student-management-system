#include <iostream>
#include <string>
#include "Student.h"

    //Setters
    void Student::setName(string name){
        this->name = name;
    }
    void Student::setStudentNumber(int studentNumber){
        this->studentNumber = studentNumber;

    }
    void Student::setAverageMark(double averageMark){
        this->averageMark = averageMark;

        if(averageMark > 100 || averageMark < 0){
            this->averageMark = -1;
        }
    }

    //Getting
    string Student::getName() const{
        return name;
    }
    int Student::getStudentNumber() const{
        return studentNumber;
    }
    double Student::getAverageMark() const{
        return averageMark;
    }

    //Displayers
    void Student::display() const{
        cout << "Student Name: " << getName() << '\n';
        cout << "Student Number: " << getStudentNumber() << '\n';
        cout << "Average Mark: " << getAverageMark() << '\n';
    }