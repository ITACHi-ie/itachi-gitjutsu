#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    cout << "\n--- Multiplication Table of " << num << " ---" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    cout << "-----------------------------" << endl;
    
    
    
    



    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    cout << "\n--- Multiplication Table of " << num << " ---" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    cout << "-----------------------------" << endl;

  


    return 0;
}

