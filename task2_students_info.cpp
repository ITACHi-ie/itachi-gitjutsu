#include <iostream>
#include <string>
using namespace std;

int main() {
    string name1, name2, name3;
    string roll1, roll2, roll3;
    float gpa1, gpa2, gpa3;
    
    cout << "Enter details for 3 students:\n" << endl;
    
    // Student 1
    cout << "Student 1:" << endl;
    cout << "Name: ";
    getline(cin, name1);
    cout << "Roll Number: ";
    getline(cin, roll1);
    cout << "GPA: ";
    cin >> gpa1;
    cin.ignore(); // Clear newline character
    
    cout << endl;
    
    // Student 2
    cout << "Student 2:" << endl;
    cout << "Name: ";
    getline(cin, name2);
    cout << "Roll Number: ";
    getline(cin, roll2);
    cout << "GPA: ";
    cin >> gpa2;
    cin.ignore(); // Clear newline character
    
    cout << endl;
    
    // Student 3
    cout << "Student 3:" << endl;
    cout << "Name: ";
    getline(cin, name3);
    cout << "Roll Number: ";
    getline(cin, roll3);
    cout << "GPA: ";
    cin >> gpa3;
    
    // Display results
    cout << "\n=== Student Records ===" << endl;
    cout << "1. " << name1 << " - " << roll1 << " - GPA: " << gpa1 << endl;
    cout << "2. " << name2 << " - " << roll2 << " - GPA: " << gpa2 << endl;
    cout << "3. " << name3 << " - " << roll3 << " - GPA: " << gpa3 << endl;
    
    return 0;
}
