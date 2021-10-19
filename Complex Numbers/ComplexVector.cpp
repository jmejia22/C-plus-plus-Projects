

 /*
         PIC 10B 2B, Homework 4
         Purpose: Complex Vectors
         Author: Jacob Mejia
         Date: 02/28/2020
*/

#include "ComplexVector.h"
using namespace std;

ComplexVector::ComplexVector()
{
    
};

ComplexVector::ComplexVector(vector<Complex>& v)
{
    vect = v;
}

ComplexVector ComplexVector::operator+(ComplexVector const& rhs)
{
    ComplexVector temp(*this);
    
    for (int i = 0; i < temp.vector_size(); i++)
    {
        temp.vect[i] = vect[i] + rhs.vect[i];
    }

    return temp;
}


ComplexVector ComplexVector::operator-(ComplexVector const& rhs)
{
    ComplexVector temp(*this);
    
    for (int i = 0; i < temp.vector_size(); i++)
       {
           temp.vect[i] = vect[i] - rhs.vect[i];
       }
    return temp;
}



ComplexVector ComplexVector::operator*(ComplexVector const& rhs)
{
    ComplexVector temp(*this);

    for (int i = 0; i < temp.vector_size(); i++)
       {
           temp.vect[i] = vect[i] * rhs.vect[i];
       }
    
    return temp;
}

ComplexVector ComplexVector::operator/(ComplexVector const& rhs)
{
    ComplexVector temp(*this);
    
    for (int i = 0; i < temp.vector_size(); i++)
       {
           temp.vect[i] = vect[i] / rhs.vect[i];
       }
    return temp;
}

 ostream& operator<<(ostream& out, ComplexVector& v)
{
    
    out << "{";
    for (int i = 0; i < v.vector_size(); i++)
    {
        out << v.vect[i].get_real() << " ";
        if (v.vect[i].get_imaginary() < 0)
        {
    out << "- " << -1.0*v.vect[i].get_imaginary();
       }
    
    else
    {
    out  << "+ " <<v.vect[i].get_imaginary();
    }
    
    if (i == v.vect.size()-1)
    {
    out << "i";
    }
    else
    out << "i, ";
    
    }
    out << "}";
    return out;
}
    
vector<Complex> ComplexVector:: get_vector()
    {
    return vect;
    }

   unsigned long ComplexVector:: vector_size()
    {
    return vect.size();
    }


ComplexVector func(int n)
{

if (n==1)
{
    vector <Complex> result;
    result.push_back(Complex(1,1));
    return ComplexVector(result);
}
    ComplexVector v = func(n-1);
    vector<Complex> result = v.vect;

    result.push_back(Complex(2*(n-1), 3*(n-1))/Complex(7,5*(n-1) * (n-1)) * v.vect[v.vect.size()-1]);
    return ComplexVector(result);
}




//ComplexVector func(int n)
//    {
//    vector<Complex> v;
////    if (n==1)
////    {
////    v.push_back(Complex(1, 1));
////    }
////
//    ComplexVector result;
//
//    for (int i = 0; i < n; i++)
//    {
//    int j = i+1;
//
//    if (j == 1)
//    {
//    result.vect.push_back(Complex(1,1));
//    continue;
//    }
//    ++j;
//    result.vect.push_back((Complex(2*(j-1),3*(j-1))/Complex(7,5*(j-1)*(j-1))));
//    }
//    return ComplexVector(result);
//    }































