#include <iostream>
#include <cmath> // for M_PI

// Base class Shape with pure virtual function area()
class Shape {
public:
    virtual double area() const = 0; // pure virtual function
    virtual ~Shape() {} // virtual destructor
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double area() const override {
        return length * breadth;
    }
};

int main() {
    // Array of pointers to Shape
    Shape* shapes[4];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Circle(3.0);
    shapes[3] = new Rectangle(2.5, 5.0);

    for (int i = 0; i < 4; ++i) {
        std::cout << "Area of shape " << i+1 << ": " << shapes[i]->area() << std::endl;
    }

    // Clean up memory
    for (int i = 0; i < 4; ++i) {
        delete shapes[i];
    }

    return 0;
}
