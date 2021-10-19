
#include <iostream>
#include <fstream>
#include <sstream>
#include "textfile.h"
using namespace std;

int main()
{
    cout << "Enter the name of file 1: ";
    string file1;
    cin >> file1;

    cout << "Enter the name of file 2: ";
    string file2;
    cin >> file2;
    
    textfile f1;
    textfile f2;


    f1.file_open(file1);
    f2.file_open(file2);
    
    f1.set_name(file1);
    f2.set_name(file2);
   
    textfile f3;
    f3.new_file_open("solution.txt");
    f3.write_file(f1,f2);
    
    f1.input_close();
    f2.input_close();
    f3.output_close();
    
}

// figure out why the numbers for words and characters are off.
