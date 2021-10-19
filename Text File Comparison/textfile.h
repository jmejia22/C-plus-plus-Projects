

#ifndef textfile_h
#define textfile_h

#include <iostream>
#include <fstream>
using namespace std;

class textfile
{
public:
   
    void file_open(string file);
    int number_of_characters();
    int number_of_words();
    int number_of_lines();
    int get_words();
    string get_name();
    void set_name(string name);
    
    void input_close();
    void output_close();
    
    void new_file_open(string file);
    void write_file( textfile& a,  textfile& b);
    
    friend bool operator>(textfile& a,  textfile& b);
    
    friend bool operator==( textfile& a, textfile& b);

    
private:
    ifstream input;
    ofstream output;
    string file_name;
    
};
#endif /* textfile_h */
