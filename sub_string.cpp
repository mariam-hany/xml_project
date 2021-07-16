#include "sub_string.h"
#include "ui_sub_string.h"
#include "mainwindow.h"
#include "QFile"
#include "QPlainTextEdit"
#include "QMessageBox"
#include "QDebug"
#include "iostream"
#include<string>
//#include <bits/stdc++.h>
#include <bitset>
#include <stack>
#include <vector>


using namespace std;
bool flag=false;
sub_string::sub_string(QWidget *parent,QString x) :
    QDialog(parent),
    ui(new Ui::sub_string)
{
    ui->setupUi(this);

    fpathprivate = x;
    QFile xmlfile(fpathprivate);

    if(!xmlfile.open(QIODevice::ReadOnly |QIODevice::Text))
    {
        cout<<"cannot open file in substring_dialog"<<endl;
        return;
    }
    int counter = 0;
       string y;
     QTextStream in(&xmlfile);
     while (!in.atEnd()) {

         QString line = in.readAll();
         // do things
         //output the file with ERRORS
        ui->plainTextEdit->setPlainText(line);

        y =  line.toLocal8Bit().constData();
        ya = y;
        cout<<y;

     }

     xmlfile.close();




}

//////////////









void sub_string:: get_string( string  y){
cout<<"\n nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn\n";
cout<<" i am  in class sub  string  in fn get string\n ";
//cout<<y;
cout<<" i am  in class sub  string  in fn get string\n ";

cout<<"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn\n";
}



void  sub_string:: get_line(string y){
   cout<<" iam in get lineeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee 1\n";
//y=y.substr(y.find('>')+1);
//y=y.substr(y.find('<'));
   string first_comment;
  // y = y.substr(1);
  // cout<<"y.find << "<<y.find('<')<<".........y.find ?????????? "<<y.find('?')<<endl;
  // cout<<"y.find << "<<y.find('<')<<".........y.find !!!!!! "<<y.find('!')<<endl;
   while( 1){

       if(!((y.find('<') == (y.find('!')-1 ) ) || (y.find('<') == (y.find('?')-1))))
        {
        //cout<<"bbbbbbbbbbbbbbbbbbbbbbbbbbrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeeeeeeeeeeeaaaaaaaaaaaaaaaaaaaakkkkkkkk\n";
        break;
       }
      // cout<<"iiiiiiiiiiinnnnnnnnnnnnn  whiiiiiiile\n";
   if(y.find('<') == y.find('?')-1)
   {
     //substr until \n
       int newlinepos = y.find('\n');
       y = y.substr(newlinepos+1);

   }
   //handling first comment before root element
   if((y.find('<') == y.find('!')-1  ))
   {
       //substr until \n
         int newlinepos = y.find('\n');
         first_comment = y.substr(0,newlinepos);
         y = y.substr(newlinepos+1);

   }
      }
   string *s;
string temp[1000];
int i=0;
int j=0;
while(y.length()>3)
{
   //cout<<"\n y.find  >>"<<y.find('>');



   temp[i]=y.substr(y.find('<'),y.find('\n')-y.find('<'));
   if(y.find('\n')<2000)
   y = y.substr(y.find('\n')+1);
   else
         y = y.substr(y.find('>')+1);

   //cout<<"line numberrrr rrrrrrrrrrrrrrrrrrrrrrrrrrr"<<i<<"............\n"<<temp[i]<<endl;
   //    check_brackets( temp[i], i );

  // cout<<" y.find << "<<y.find('<')<<endl;
  //  cout<<"y.find  new line "<<y.find('\n')<<endl;
      // check_tags(temp[i],i);
     check_invaild_tag( temp[i],i);
   // check_tags(temp[i],i);

i++;


   //j++;
}
if(s_name.empty() && !flag){
string err = " No Error :) \n ";
//ui->plainTextEdit_2->setPlainText->insertplaintext(err);
ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
}
}






void  sub_string:: get_line1(string y){
   cout<<" iam in get lineeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee 1\n";
//y=y.substr(y.find('>')+1);
//y=y.substr(y.find('<'));
   string first_comment;
  // y = y.substr(1);
  // cout<<"y.find << "<<y.find('<')<<".........y.find ?????????? "<<y.find('?')<<endl;
  // cout<<"y.find << "<<y.find('<')<<".........y.find !!!!!! "<<y.find('!')<<endl;
   while( 1){

       if(!((y.find('<') == (y.find('!')-1 ) ) || (y.find('<') == (y.find('?')-1))))
        {
        //cout<<"bbbbbbbbbbbbbbbbbbbbbbbbbbrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeeeeeeeeeeeaaaaaaaaaaaaaaaaaaaakkkkkkkk\n";
        break;
       }
      // cout<<"iiiiiiiiiiinnnnnnnnnnnnn  whiiiiiiile\n";
   if(y.find('<') == y.find('?')-1)
   {
     //substr until \n
       int newlinepos = y.find('\n');
       y = y.substr(newlinepos+1);

   }
   //handling first comment before root element
   if((y.find('<') == y.find('!')-1  ))
   {
       //substr until \n
         int newlinepos = y.find('\n');
         first_comment = y.substr(0,newlinepos);
         y = y.substr(newlinepos+1);

   }
      }
   string *s;
string temp[1000];
int i=0;
int j=0;
while(y.length()>3)
{
   //cout<<"\n y.find  >>"<<y.find('>');



   temp[i]=y.substr(y.find('<'),y.find('\n')-y.find('<'));
   if(y.find('\n')<2000)
   y = y.substr(y.find('\n')+1);
   else
         y = y.substr(y.find('>')+1);

    sub_string::check_tags(temp[i],i);

i++;


   //j++;
}
if(s_name.empty()&& !flag ){
string err = "                              No Error :) \n ";
ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
}

}

int  sub_string:: get_num_of_brackets(string y, int num_line ){
int i=0;

   for(int i1=0; i1<y.length(); i1++)
   {

   if(y[i1]=='<')
      { s.push("<");
   i++;

   }
   if(y[i1]=='>')
      { s.push(">");
   i++;

   }

   }
   //cout<<"iiiiiiiiiiii ............ "<<i<<endl;
   return i;
}

void  sub_string:: check_tags(string y, int num_line ){
string temp;
int i=0;
int num;

//cout<<"my zeftttttttttttttt "<< y<<endl;
num = get_num_of_brackets( y,  num_line );
//cout<<"nummmmmmmmmmnnnnnnnnn  "<<num;
if(num==2 ){
if(y.find(' ')>y.find('>')){
   temp=y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
   if(temp[0] !='!' && temp[0] !='/')
  {

   s_name.push(temp);
    line.push(num_line);
   cout<<"my stack is "<< s_name.top()<<endl;
   }
   if( temp[0] =='/'){

       if(("/"+s_name.top())== temp)
          {
         cout<<"pppppppopppppp "<<s_name.top()<<"  "<<num_line+1<<endl;
          s_name.pop();
          line.pop();
       }
       else
       {

           cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line .....";
           cout<<line.top()+1<<"missing closing tag of "<<s_name.top()<<endl;
           int r = line.top()+1;

      flag = true ;
          string err = "Error in  line " +to_string(r)+ "missing closing tag of " +  s_name.top()+"\n";
           ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
           s_name.pop();
           line.pop();
       }
   }

}else
{
   temp=y.substr(y.find('<')+1,y.find(' ')-y.find('<')-1);
   if(temp[0]!='!'&& temp[0] !='/')
  {
   s_name.push(temp);
    line.push(num_line);
   cout<<"my stack is "<< s_name.top()<<endl;
   }

   if( temp[0] =='/'){

       if(("/"+s_name.top())== temp)
       { cout<<"pppppppopppppp "<<s_name.top()<<"  "<<num_line+1<<endl;
           s_name.pop();
       line.pop();
       }
       else
       {
           cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line .....";
           cout<<line.top()+1<<"  missing closing tag of "<<s_name.top()<<endl;
       int r = line.top()+1;
       flag = true ;
        string err = "Error in  line " +to_string(r)+ "missing closing tag of " +  s_name.top()+"\n";
        ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
        s_name.pop();
        line.pop();
       }
   }
}
}
int m=2;
if(num==4  ){
   while(m>0){
        m--;
   if(y.find(' ')>y.find('>')){
       temp=y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
       y= y.substr(y.find('>')+1);
       y= y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
       if(temp[0]!='!' && temp[0] !='/')
      {
       s_name.push(temp);
        line.push(num_line);
       cout<<"my stack is "<< s_name.top()<<endl;
       }

       if( temp[0] =='/'){

           if(("/"+s_name.top())== temp)
             {
                cout<<"pppppppopppppp "<<s_name.top()<<"  "<<num_line+1<<endl;
               s_name.pop();
           line.pop();
           }
           else
              {  cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line .....";
               cout<<line.top()+1<<"  missing closing tag of "<<s_name.top()<<endl;
           int r = line.top()+1;
           flag = true ;
           string err = "Error in  line " +to_string(r) + "missing closing tag of " +  s_name.top()+"\n";
            ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
            s_name.pop();
            line.pop();
}
       }

   }
   else
   {
       temp=y.substr(y.find('<')+1,y.find(' ')-y.find('<')-1);
       y= y.substr(y.find('>')+1);
       y= y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
       if(temp[0]!='!' && temp[0] !='/')
      {
       s_name.push(temp);
       line.push(num_line);
       cout<<"my stack is "<< s_name.top()<<endl;
       }
       if( temp[0]=='/'){

           if(("/"+s_name.top())== temp)
              {
               cout<<"pppppppopppppp "<< s_name.top()<<"  "<<num_line+1<<endl;
               s_name.pop();
               line.pop();

           }
           else
           {
                cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line .....";
                cout<<line.top()+1<<"  missing closing tag of "<<s_name.top()<<endl;
           int r = line.top()+1;
           flag = true ;
            string err = "Error in  line " +to_string(r)+ "missing closing tag of " +  s_name.top()+"\n";
           ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));

           s_name.pop();
           line.pop();
           }
       }
   }


}

}
}

//////////
///
 void  sub_string:: check_invaild_tag(string y, int num_line ){
string temp;
int i=0;
int num;
flag=true;
//cout<<"my zeftttttttttttttt "<< y<<endl;
num = get_num_of_brackets( y,  num_line );
//cout<<"nummmmmmmmmmnnnnnnnnn  "<<num;
if(num==2 ){
if(y.find(' ')>y.find('>')){
   temp=y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
   if(temp[0] !='!' && temp[0] !='/')
  {

   s_name.push(temp);
    line.push(num_line);
   cout<<"my stack is "<< s_name.top()<<endl;
   }
   if( temp[0] =='/'){

       if(("/"+s_name.top())== temp)
          {
         cout<<"pppppppopppppp "<<s_name.top()<<"  "<<num_line+1<<endl;
          s_name.pop();
          line.pop();
       }
       else
       {
           cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line .....";
           cout<<num_line +1<<"\n"<< temp<< " invalid tag name "<<endl;
flag = true ;
           int r = num_line +1;
            string err = "Error in  line... " +to_string(r)+ "\n" + temp + " invalid tag name should replace by /"+s_name.top()+"\n";
           ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
           //////////////// correct
           ///
              //correct(y,temp,num_line);
           s_name.pop();
           line.pop();



       }
   }

}else
{
   temp=y.substr(y.find('<')+1,y.find(' ')-y.find('<')-1);
   if(temp[0]!='!'&& temp[0] !='/')
  {
   s_name.push(temp);
    line.push(num_line);
   cout<<"my stack is "<< s_name.top()<<endl;
   }

   if( temp[0] =='/'){

       if(("/"+s_name.top())== temp)
       { cout<<"pppppppopppppp "<<s_name.top()<<"  "<<num_line+1<<endl;
           s_name.pop();
       line.pop();
       }
       else
    {
           cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line .....";
        cout<<num_line +1<<"\n"<< temp<< " invalid tag name "<<endl;
           int r = num_line +1;
           flag = true ;
            string err = "Error in  line... " +to_string(r)+ "\n" + temp + " invalid tag name should replace by /"+s_name.top()+"\n";
          ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
           //////////////// correct
           ///
              //correct(y,temp,num_line);
           s_name.pop();
           line.pop();
         }

   }
}
}
int m=2;
if(num==4  ){
   while(m>0){
        m--;
   if(y.find(' ')>y.find('>')){
       temp=y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
       y= y.substr(y.find('>')+1);
       y= y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
       if(temp[0]!='!' && temp[0] !='/')
      {
       s_name.push(temp);
        line.push(num_line);
       cout<<"my stack is "<< s_name.top()<<endl;
       }

       if( temp[0] =='/'){

           if(("/"+s_name.top())== temp)
             {
                cout<<"pppppppopppppp "<<s_name.top()<<"  "<<num_line+1<<endl;
               s_name.pop();
           line.pop();
           }
           else
           {
                  cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line .....";
cout<<num_line+1<<"\n"<< temp<< " invalid tag name "<<endl;
                  //////////////// correct
flag = true ;
                  int r = num_line +1;
                   string err = "Error in  line... " +to_string(r)+ "\n" + temp + " invalid tag name should replace by /"+s_name.top()+"\n";
                   ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
                  s_name.pop();
                  line.pop();
                }
       }

   }
   else
   {
       temp=y.substr(y.find('<')+1,y.find(' ')-y.find('<')-1);
       y= y.substr(y.find('>')+1);
       y= y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
       if(temp[0]!='!' && temp[0] !='/')
      {
       s_name.push(temp);
       line.push(num_line);
       cout<<"my stack is "<< s_name.top()<<endl;
       }
       if( temp[0]=='/'){

           if(("/"+s_name.top())== temp)
              {
               cout<<"pppppppopppppp "<< s_name.top()<<"  "<<num_line+1<<endl;
               s_name.pop();
               line.pop();

           }
           else

           {
                  cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line .....";
                  cout<<num_line+1<<"\n"<< temp<< " invalid tag name "<<endl;
                  int r = num_line +1;
                  flag = true ;

                   string err = "Error in  line... " +to_string(r)+ "\n" + temp + " invalid tag name should replace by /"+s_name.top()+"\n";
                   ui->plainTextEdit_2->insertPlainText(QString::fromStdString(err));
                  s_name.pop();
                  line.pop();
                }

       }
   }


}

}
}

 string   sub_string:: correct(string y,string temp, int num_line ){
    y = y.replace(y.find(temp), temp.length(), temp);
     return y;
 }













sub_string::~sub_string()
{
    delete ui;
}

void sub_string::on_checkmissingtag_button_clicked()
{
    sub_string::get_line1(ya);
}


void sub_string::on_checkinvalidtag_button_clicked()
{
    sub_string::get_line(ya);
}

