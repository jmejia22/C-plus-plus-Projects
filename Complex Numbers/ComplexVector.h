
 /*
         PIC 10B 2B, Homework 4
         Purpose: Complex Vectors
         Author: Jacob Mejia
         Date: 02/28/2020
*/

#ifndef ComplexVector_h
#define ComplexVector_h

#include <iostream>
#include <vector>
#include "Complex.h"
using namespace std;

class ComplexVector
{
public:
    ComplexVector();
    ComplexVector(vector<Complex>& vect);
    
    ComplexVector operator+(ComplexVector const& obj);
     ComplexVector operator-(ComplexVector const& obj);
     ComplexVector operator*(ComplexVector const& obj);
     ComplexVector operator/(ComplexVector const& obj);
    
    friend ostream& operator<<(ostream & output, ComplexVector& vect);
    
    
    vector<Complex> get_vector();
    unsigned long vector_size();
    
    friend ComplexVector func(int n);
    
private:
    vector <Complex> vect;
  
};

ComplexVector func(int n);
#endif /* ComplexVector_h */


