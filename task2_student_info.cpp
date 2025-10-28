#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int NUM_STUDENTS = 3;
    
    // Arrays to store student data
    string names[NUM_STUDENTS];
    string rollNumbers[NUM_STUDENTS];
    float gpas[NUM_STUDENTS];
    
    cout << "=== Student Information System ===" << endl << endl;
    
    // Input data for 3 students
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter details for Student " << (i + 1) << ":" << endl;
        
        cout << "Name: ";
        cin.ignore(); // Clear input buffer
        getline(cin, names[i]);
        
        cout << "Roll Number: ";
        getline(cin, rollNumbers[i]);
        
        cout << "GPA: ";
        cin >> gpas[i];
        
        cout << endl;
    }
    
    // Display all student information
    cout << "=== Student Records ===" << endl;
    cout << left << setw(5) << "No." << setw(20) << "Name" 
         << setw(15) << "Roll Number" << "GPA" << endl;
    cout << string(50, '-') << endl;
    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << left << setw(5) << (i + 1) << "." 
             << setw(20) << names[i] 
             << setw(15) << rollNumbers[i] 
             << fixed << setprecision(2) << gpas[i] << endl;
    }
    
    return 0;
}
