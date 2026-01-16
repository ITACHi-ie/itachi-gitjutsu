//#include <iostream>
//using namespace std;
//
//class Complex {
//public:
//    int r, i;
//
//    Complex(int a, int b) {
//        r = a;
//        i = b;
//    }
//
//    Complex operator+(Complex c) {
//        return Complex(r + c.r, i + c.i);
//    }
//
//    void display() {
//        cout << r << " + i" << i << endl;
//    }
//};
//
//int main() {
//    Complex c1(2, 3), c2(1, 5);
//    Complex c3 = c1 + c2;
//    c3.display();
//    return 0;
//}


//
//#include <iostream>
//using namespace std;
//
//class Complex {
//public:
//    int r, i;
//
//    Complex(int a, int b) {
//        r = a;
//        i = b;
//    }
//
//    Complex operator-(Complex c) {
//        return Complex(r - c.r, i - c.i);
//    }
//
//    void display() {
//        cout << r << " + i" << i << endl;
//    }
//};
//
//int main() {
//    Complex c1(5, 7), c2(2, 5);
//    Complex c3 = c1 - c2;
//    c3.display();
//    return 0;
//}







#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    Complex(int a = 0, int b = 0) {
        r = a;
        i = b;
    }

    Complex operator+(Complex c) {
        return Complex(r + c.r, i + c.i);
    }

    void display() {
        cout << r << " + i" << i << endl;
    }
};

int main() {
    int r1, i1, r2, i2;

    cout << "Enter r and i number: ";
    cin >> r1 >> i1;

    cout << "Enter r and i part : ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex c3 = c1 + c2;

    cout << "Result: ";
    c3.display();

    return 0;
}

