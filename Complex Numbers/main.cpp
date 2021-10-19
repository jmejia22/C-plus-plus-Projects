
 /*
         PIC 10B 2B, Homework 4
         Purpose: Complex Vectors
         Author: Jacob Mejia
         Date: 02/28/2020
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>
#include "Complex.h"
#include "ComplexVector.h"

using namespace std;


int main()
{
    
    Complex a(2.0,4.0);
    Complex b(3.0,5.0);
    Complex c(-1.0,-3.0);
    Complex d(8.0,10.0);
    
    Complex e(-10.0,3.5);
    Complex f(4.0,7.3);
    Complex g(2.0,-8.0);
    Complex h(10.0,-142.0);
    
    vector<Complex> v1;
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    v1.push_back(d);
    
    vector<Complex> v2;
    v2.push_back(e);
    v2.push_back(f);
    v2.push_back(g);
    v2.push_back(h);
    
    ComplexVector vect1(v1);
    ComplexVector vect2(v2);
    
    cout << endl;
   
    ComplexVector ex1 = vect1+vect2;
    ComplexVector ex2 = vect1-vect2;
    ComplexVector ex3 = vect1*vect2;
    ComplexVector ex4 = vect1/vect2;
    
    cout << "     v1 = "  << fixed << setprecision(1) <<vect1 << endl;
    cout << "     v2 = " << vect2 << endl;
    cout << "v1 + v2 = " << ex1 << endl;
    cout << "v1 - v2 = " << ex2 << endl;
    cout << "v1 * v2 = " << ex3 << endl;
    cout << "v1 / v2 = " << ex4 << endl << endl;
    
    cout << "Writing Complex Sequence to File ...Done" << endl;
    
    ComplexVector test = func(6);
    ofstream outfile;
       outfile.open("ComplexSequence.txt");

    outfile << test;

       outfile.close();
}




