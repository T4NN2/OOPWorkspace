#include <iostream>
#include <cmath> // for M_PI

// Pure abstract class Drawable with pure virtual draw()
class Drawable {
public:
    virtual void draw() const = 0; // pure virtual function
    virtual ~Drawable() {} // virtual destructor
};

// Base class Shape inherits from Drawable
class Shape : public Drawable {
public:
    virtual double area() const = 0; // pure virtual function
    void draw() const override {
        std::cout << "Drawing a shape" << std::endl;
    }
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
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
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
    void draw() const override {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return (base * height) / 2.0;
    }
    void draw() const override {
        std::cout << "Drawing a triangle" << std::endl;
    }
};

int main() {
    // Array of pointers to Shape
    Shape* shapes[5];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Circle(3.0);
    shapes[3] = new Rectangle(2.5, 5.0);
    shapes[4] = new Triangle(3.0, 4.0);

    for (int i = 0; i < 5; ++i) {
        std::cout << "Area of shape " << i+1 << ": " << shapes[i]->area() << std::endl;
        shapes[i]->draw();
    }

    // Clean up memory
    for (int i = 0; i < 5; ++i) {
        delete shapes[i];
    }

    return 0;
}
