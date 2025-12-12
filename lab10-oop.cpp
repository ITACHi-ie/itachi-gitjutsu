//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//    int length, width;
//
//  
//    Rectangle(int l, int w) {
//        length = l;
//        width = w;
//    }
//
// 
//    int area() {
//        return length * width;
//    }
//};
//
//int main() {
//    Rectangle r(5, 3); 
//
//    cout << "Area = " << r.area();
//
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//    int length, width;
//
//    Rectangle(int l, int w) {
//        length = l;
//        width = w;
//    }
//
//    int area() {
//        return length * width;
//    }
//
//    int perimeter() {
//        return 2 * (length + width);
//    }
//};
//
//int main() {
//    Rectangle r(5, 7);
//
//    cout << "Area = " << r.area() << endl;
//    cout << "Perimeter = " << r.perimeter();
//
//    return 0;
//}












//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//    int length, width;
//
//    Rectangle(int l, int w) {
//        length = l;
//        width = w;
//    }
//
//    int area() { return length * width; }
//    int perimeter() { return 2 * (length + width); }
//};
//
//int main() {
//    Rectangle r1(3, 5);
//    Rectangle r2(5, 7);
//    Rectangle r3(7, 10);
//
//    cout << "Rectangle 1: Area = " << r1.area() 
//         << ", Perimeter = " << r1.perimeter() << endl;
//
//    cout << "Rectangle 2: Area = " << r2.area() 
//         << ", Perimeter = " << r2.perimeter() << endl;
//
//    cout << "Rectangle 3: Area = " << r3.area() 
//         << ", Perimeter = " << r3.perimeter() << endl;
//
//    return 0;
//}





//
//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//    int length, width;
//
//    Rectangle(int l, int w) {
//        length = l;
//        width = w;
//    }
//
//    int area() { return length * width; }
//    int perimeter() { return 2 * (length + width); }
//};
//
//int main() {
//    int l, w;
//
//    cout << "Enter length: ";
//    cin >> l;
//
//    cout << "Enter width: ";
//    cin >> w;
//
//    Rectangle r(l, w);
//
//    cout << "Area = " << r.area() << endl;
//    cout << "Perimeter = " << r.perimeter() << endl;
//
//    return 0;
//}




//
//
//
//
//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//    int length, width;
//
//    Rectangle(int l, int w) {
//        length = l;
//        width = w;
//    }
//
//    void display() {
//        cout << "Length = " << length << ", Width = " << width << endl;
//    }
//};
//
//int main() {
//    Rectangle r(10, 5);
//
//    r.display();
//
//    return 0;
//}
//






//#include <iostream>
//using namespace std;
//
//class Square {
//public:
//    int side;
//
//    Square(int s) {
//        side = s;
//    }
//
//    int area() {
//        return side * side;
//    }
//};
//
//int main() {
//    Square s(5);
//
//    cout << "Area of Square = " << s.area();
//
//    return 0;
//}






#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() { return length * width; }
};

int main() {
    Rectangle r1(5, 7);
    Rectangle r2(9, 3);

    int area1 = r1.area();
    int area2 = r2.area();

    if (area1 > area2)
        cout << "Rectangle 1 has a bigger area.";
    else if (area2 > area1)
        cout << "Rectangle 2 has a bigger area.";
    else
        cout << "Both rectangles have equal area.";

    return 0;
}









