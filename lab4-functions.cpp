#include <iostream>
using namespace std;

// Recursive factorial function
int factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}

// Iterative factorial function
int factorialIterative(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Prime number checker
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "\nFactorial (Recursive): " << factorialRecursive(num);
    cout << "\nFactorial (Iterative): " << factorialIterative(num);

    if (isPrime(num))
        cout << "\nResult: Prime Number" << endl;
    else
        cout << "\nResult: Not Prime" << endl;

    return 0;
}

