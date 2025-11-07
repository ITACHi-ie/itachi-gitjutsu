//#include <iostream>
//using namespace std;
//
//void swapNumbers(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int x, y;
//
//    cout << "Enter first number: ";
//    cin >> x;
//    cout << "Enter second number: ";
//    cin >> y;
//
//    cout << "\nBefore swapping:" << endl;
//    cout << "x = " << x << ", y = " << y << endl;
//
//    swapNumbers(&x, &y);
//
//    cout << "\nAfter swapping:" << endl;
//    cout << "x = " << x << ", y = " << y << endl;
//
//    return 0;
//}
//









#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    // Dynamically allocate array
    int *arr = new int[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nYou entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // Free allocated memory
    delete[] arr;

    return 0;
}


