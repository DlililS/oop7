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
    ~Complex();
};
ostream& operator<<(ostream& stream, const Complex& obj) {
    return stream << obj.Im << " + " << obj.Re << "i";
}
class Vector {
    double a1, a2, a3;
    double b1, b2, b3;
    double vector1[3];
    double vector2[3];
public:
    Vector(double _a1, double _a2, double _a3, double _b1, double _b2, double _b3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;
        vector[0] = a1;
        vector[1] = a2;
        vector[2] = a3;
    }
    ~Vector();
    double plus() {
        double vector_c[3];
        vector_c[0] = vector[0] + this->vector[0];
        vector_c[1] = vector[1] + this->vector[1];
        vector_c[2] = vector[2] + this->vector[2];
        for (double t : vector_c)
        {
            return t;
        }
    }
    double multiply() {
        double vector_c[3];
        vector_c[0] = vector[0] * this->vector[0];
        vector_c[1] = vector[1] * this->vector[1];
        vector_c[2] = vector[2] * this->vector[2];
        for (double t : vector_c)
        {
            return t;
        }
    }
};
class Circle {
    float p = 3.14;
    double r{};
public:
    explicit Circle(double _r) {
        r = _r;
    }
    ~Circle();
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
