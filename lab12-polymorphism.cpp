//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//    void area(int side) {
//        cout << "Area of Square = " << side * side << endl;
//    }
//
//    void area(int length, int width) {
//        cout << "Area of Rectangle = " << length * width << endl;
//    }
//};
//
//int main() {
//    Shape s;
//    s.area(5);
//    s.area(4, 6);
//    return 0;
//}





#include <iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = p * r * r" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

int main() {
 
    Circle c;
    Rectangle r;

 
    c.area(); 
    r.area();  

    return 0;
}

//
//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//    virtual void area() {
//        cout << "Area of Shape" << endl;
//    }
//};
//
//class Circle : public Shape {
//public:
//    void area() override {
//        cout << "Area of Circle = p * r * r" << endl;
//    }
//};
//
//class Rectangle : public Shape {
//public:
//    void area() override {
//        cout << "Area of Rectangle = length * width" << endl;
//    }
//};
//
//class Triangle : public Shape {
//public:
//    void area() override {
//        cout << "Area of Triangle = 0.5 * base * height" << endl;
//    }
//};
//
//int main() {
//    Shape* s1;
//    Shape* s2;
//    Shape* s3;
//
//    Circle c;
//    Rectangle r;
//    Triangle t;
//
//    s1 = &c;
//    s2 = &r;
//    s3 = &t;
//
//    s1->area();
//    s2->area();
//    s3->area();
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//








