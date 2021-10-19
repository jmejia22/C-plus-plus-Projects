

 /*
         PIC 10B 2B, Homework 4
         Purpose: Complex Vectors
         Author: Jacob Mejia
         Date: 02/28/2020
*/

#ifndef Complex_h
#define Complex_h

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Complex
{
public:
    Complex();
Complex(float r, float i);
    
    float get_real();
    float get_imaginary();
    
    Complex operator+(Complex obj);
    Complex operator-(Complex obj);
    Complex operator*(Complex obj);
    Complex operator/(Complex obj);
    
    friend ostream& operator<<(ostream & output, Complex& vect);
    
    void print();
    
private:
    float real;
    float imaginary;
    
    
};
#endif /* Complex_h */
