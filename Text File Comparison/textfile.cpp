

#include "textfile.h"
using namespace std;


void textfile::file_open(string f)
{
    input.open(f);
}


 int textfile::number_of_characters()
{
    input.clear();
       input.seekg(0, ios::beg);
    char ch;
    int count = 0;
    while(!input.eof())
       {
        input.get(ch);
          // cout << ch;
           count++;
       }
    return count;
}



int textfile::number_of_words()
{
    input.clear();
       input.seekg(0, ios::beg);
    string s;
      int count = 0;
      while(input >> s)
         {
             
//            input >> s;
         //    cout << s << " ";
             count++;
         }
      return count;
}


int textfile::number_of_lines()
{
    input.clear();
    input.seekg(0,ios::beg);
    int number_of_lines = 0;
    string line;
    while (getline(input, line))
    {
        ++number_of_lines;
    }
    return number_of_lines;
}

int textfile::get_words()
{
    return number_of_words();
}


string textfile::get_name()
{
    return file_name;
}

void textfile::set_name(string name)
{
    file_name = name;
}

 void textfile:: new_file_open(string file)
{
    output.open(file);
}

void textfile::write_file(textfile& a, textfile& b)
{
    output << "File name: " << a.get_name() << endl;
    output << "Number of characters: " << a.number_of_characters() << endl;
    output << "Number of words: " << a.get_words() << endl << endl;
    
    output << "File name: " << b.get_name() << endl;
      output << "Number of characters: " << b.number_of_characters() << endl;
      output << "Number of words: " << b.get_words() << endl << endl;
    
      if (a==b == true)
         {
             output << "The file named \"" <<a.get_name()<< "\" has the same amount of lines as \"" << b.get_name() << "\"";
         }

    else  if (a>b == true)
      {
          output << "The file named \"" <<a.get_name()<< "\" has more lines than \"" << b.get_name() << "\"";
          
      }
    else if (a>b == false)
      {
          output << "The file named \"" <<a.get_name()<< "\" has less lines than \"" << b.get_name() << "\"";
      }
    
}
void textfile::input_close()
{
    input.close();
}

void textfile::output_close()
{
    output.close();
}


bool operator>( textfile& a,  textfile& b)
  {
     if (a.number_of_lines() > b.number_of_lines())
         return true;
     else return false;
  }
 
bool operator==( textfile& a,  textfile& b)
  {
      if (a.number_of_lines() == b.number_of_lines())
          return true;
      else return false;
  }
