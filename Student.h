#ifndef STUDENT
#define STUDENT
#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
    string name;
    int studentNumber;
    double averageMark;

    public:
    //Constructors
    Student(string name, int studentNumber, double averageMark) : name(name), studentNumber(studentNumber), averageMark(averageMark) {}
    Student() : name("Unknown"), studentNumber(-1), averageMark(-1) {}

    //Destructor
    ~Student(){
        cout << "Student: " << name << " was removed from the data base.";
    }

    //Setters
    void setName(string name);
    void setStudentNumber(int studentNumber);
    void setAverageMark(double averageMark);

    //Getting
    string getName() const;
    int getStudentNumber() const;
    double getAverageMark() const;

    //Displayers
    void display() const;
};
#endif /* STUDENT */