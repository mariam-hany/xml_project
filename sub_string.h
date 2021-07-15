#ifndef SUB_STRING_H
#define SUB_STRING_H
#include "string"
#include "vector"
using namespace std;


class sub_string
{
public:
    sub_string();
   // void get_line(string y);
    void get_string (string y);
   //   void  get_brackets(string y);
   void  get_line(string y);
   //void  check_brackets(string y , int num_line);
   void  check_tags(string y, int num_line );
   int    get_num_of_brackets(string y, int num_line );
   void check_invaild_tag(string y, int num_line );
  string   correct(string y,string temp, int num_line );
   //void  divide_str(string y, int num_line );
 //  void  missing_tag(vector<string> v );
 //  void   get_vector(string y, int num_line );
   //   int getIndex (vector<string> v,string K);
};

#endif // SUB_STRING_H
