#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float gpa;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Student: " << name << "\n"
         << "Age: " << age << "\n"
         << "GPA: " << gpa << endl;

    return 0;
}

