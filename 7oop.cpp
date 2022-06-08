#include <iostream>
#include <cmath>
using namespace std;
class Complex {
public:
    double Im;
    double Re;
    void setValues(double image, double real) {
        Im = image;
        Re = real;
    }
    Complex() : Im(0), Re(0) { };
    Complex(double im, double re) : Im(im), Re(re) { };
    Complex(const Complex& c) {
        this->Im = (c.Im);
        this->Re = (c.Re);
    }
    Complex operator+(const Complex& c) const
    {
        Complex temp{};

        temp.Re = Re + c.Re;
        temp.Im = Im + c.Im;

        return temp;
    }
    Complex operator - (Complex& c) const
    {
        Complex temp{};

        temp.Re = Re - c.Re;
        temp.Im = Im - c.Im;

        return temp;
    }
    Complex operator *(const Complex& c) const {
        Complex temp{};
        temp.Re = Re * c.Re;
        temp.Im = Re * c.Im;

        return temp;
    }
    Complex operator /(const Complex& c) const {
        Complex temp{};
        double r = c.Re * c.Re + c.Im * c.Im;
        temp.Re = (Re * c.Re + Im * c.Im) / r;
        temp.Re = (Im * c.Re - Re * c.Im) / r;
        return temp;
    }
    ~Complex() {};
};
ostream& operator<<(ostream& stream, const Complex& obj) {
    return stream << obj.Im << " + " << obj.Re << "i";
}
class Vector {
    double a1, a2, a3;
public:
    Vector() : a1(0), a2(0), a3(0) { };
    Vector(double _a1, double _a2, double _a3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;
    }
    Vector(const Vector& c) {
        this->a1 = (c.a1);
        this->a2 = (c.a2);
        this->a3 = (c.a3);
    }
    ~Vector() {};
    Vector plus(Vector a) {
        a.a1 = a.a1 + this->a1;
        a.a2 = a.a2 + this->a2;
        a.a3 = a.a3 + this->a3;
        return (a);
    }
    Vector multiply(Vector a) {
        a.a1 = a.a1 * this->a1;
        a.a2 = a.a2 * this->a2;
        a.a3 = a.a3 * this->a3;
        return (a);

    }
};
class Circle {
    double p = 3.14;
    double r{};
public:
    Circle() : p(0), r(0) { };
    Circle(double pi, double R): p(pi), r(R) {}
    Circle(const Circle& c) {
        this->r = (c.r);
        this->p = (c.p);
    }
    explicit Circle(double _r) {
        r = _r;
    }
    ~Circle() {};
    double square() const {
        return p * pow(r, 2);
    }

    double lengthc() const {
        return 2 * p * r;
    }
    double diameter() const {
        return 2 * r;
    }
};

int main() {
    return 0;
 };
