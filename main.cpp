#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main(){
    Student sibahle("Sibahle", 1, 80.0);
    Student tlhompo("Tlhompo", 2, 60.0);
    Student alice("Alice", 3, 78.6);
    Student bob;

    sibahle.display();
    cout << '\n';
    tlhompo.display();
    cout << '\n';
    alice.display();
    cout << '\n';
    bob.display();
}