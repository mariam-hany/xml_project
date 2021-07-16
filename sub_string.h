#ifndef SUB_STRING_H
#define SUB_STRING_H

#include <QDialog>
#include<string>
#include <stack>
#include <vector>
using namespace std;

namespace Ui {
class sub_string;
}

class sub_string : public QDialog
{
    Q_OBJECT

public:
    explicit sub_string(QWidget *parent = nullptr,QString x="hi");
    ~sub_string();
    void get_string (string y);
     //   void  get_brackets(string y);
     void  get_line(string y);
     void  get_line1(string y);
     //void  check_brackets(string y , int num_line);
     void  check_tags(string y, int num_line );
     int    get_num_of_brackets(string y, int num_line );
     void check_invaild_tag(string y, int num_line );
    string   correct(string y,string temp, int num_line );
     //void  divide_str(string y, int num_line );
   //  void  missing_tag(vector<string> v );
   //  void   get_vector(string y, int num_line );
     //   int getIndex (vector<string> v,string K);

private slots:
    void on_checkmissingtag_button_clicked();

    void on_checkinvalidtag_button_clicked();

private:
    Ui::sub_string *ui;
     QString fpathprivate;
     stack<string> s;
     stack<int> line;
     stack<string> s_name;
     vector<string>ms;
     string ya;
};

#endif // SUB_STRING_H
