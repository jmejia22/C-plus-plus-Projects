

 /*
         PIC 10B 2B, Homework 4
         Purpose: Complex Vectors
         Author: Jacob Mejia
         Date: 02/28/2020
*/

#include "Complex.h"
using namespace std;

Complex::Complex() {};

Complex::Complex(float r, float i)
{
    real = r;
    imaginary = i;
}

float Complex::get_real()
{
    return real;
}

float Complex::get_imaginary()
{
    return imaginary;
}

Complex Complex::operator+(Complex obj)
{
    Complex temp;
    temp.real = real+obj.real;
    temp.imaginary = imaginary+obj.imaginary;
    return temp;
}

Complex Complex:: operator-(Complex obj)
{
    Complex temp;
    temp.real = real-obj.real;
    temp.imaginary = imaginary-obj.imaginary;
    return temp;
}

Complex Complex:: operator*(Complex obj)
{
    Complex temp;
    temp.real = (real*obj.real) - (imaginary*obj.imaginary);
    temp.imaginary = (imaginary*obj.real) + (real*obj.imaginary);
    return temp;
}

Complex Complex:: operator/(Complex obj)
{
    Complex temp;
    temp.real = ((real*obj.real) + (imaginary*obj.imaginary))/(obj.real*obj.real + obj.imaginary*obj.imaginary);
    temp.imaginary = ((imaginary*obj.real) - (real*obj.imaginary))/(obj.real*obj.real + obj.imaginary*obj.imaginary);
    return temp;
}

ostream& operator<<(ostream& out, Complex& v)
{
    out << v.real << " + " << v.imaginary << "i" << endl;
    return out;
}




