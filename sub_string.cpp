#include "sub_string.h"
#include<iostream>
#include "sub_string.h"
#include<string>
#include<cstring>
//#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;
sub_string::sub_string()
{

}


stack<string> s;
stack<int> line;
stack<string> s_name;
vector<string>ms;

void sub_string:: get_string( string  y){
cout<<"\n nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn\n";
cout<<" i am  in class sub  string  in fn get string\n ";
//cout<<y;
cout<<" i am  in class sub  string  in fn get string\n ";

cout<<"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn\n";
}

/*
void  sub_string:: get_brackets(string y) {

   cout<<"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnmmmmmmmmm\n";
    cout<<" i am  in class sub  string  in fn get bracket \n ";
   y=y.substr(y.find('>')+1);
      int  i=0;
      int c=4;
      string temp;
 // while(c)
 // {


  temp = y.substr(y.find('<'),y.find('\n') );
    if(temp.find('<')==0)
       { s.push("<");
        cout<<" temp.....find,,>,,"<< y.find('>') <<endl;
        cout<<"tempppp , find new line "<<y.find('\n')<<endl;
        if(temp.find('>')< y.find('\n') )
           { s.pop();
            i++;
        y=y.substr(y.find('\n'));
        }
            else
             { cout<<"errrrrrrrrrrrrrrrrrrrorrrrrrrr\n ";
                cout<<"error in index ............ " <<i<< endl;
           // break;


              }
    }}

*/


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
   //      missing_tag(temp[i],i);

i++;


   //j++;
}
for (int i11 = 0; i11 < ms.size(); i11++) {
           cout << ms[i11] << "\n";
       }

}
/////////////
///








/*
void  sub_string:: check_brackets(string y, int num_line ){
// <bbbb><
   int i=0;
     string temp;
     cout<<"my zeftttttttttttttt "<< y<<endl;
     cout<<"my zeftttttttttttttt . length  "<< y.length()<<endl;
     cout<<"space in "<<y.find(' ')<<endl;
   for(int i1=0; i1<y.length(); i1++)
   {
//cout<<"iiiiiiiin forrrrrrrrr \n";

   if(y[i1]=='<')
      { s.push("<");
   i++;

   }
   if(y[i1]=='>')
      { s.push(">");
   i++;

   }

   }
   cout<<"iiiiiiiiiii "<<i<<endl;
   if(i%2!=0)
   {cout<<"errrrrrorrr  in line "<<num_line<<" one or more addtional brackets \n";
       while(!s.empty())
           s.pop();
    return;
   }
   if(s.top()!=">")
     {  cout<<"errrrrrorrr  in line "<<num_line <<" mising > bracket \n";
       while(!s.empty())
           s.pop();
    return;
   }

      // cout<<" temp.....find,,>,,"<< y.find('>') <<endl;
      // cout<<"tempppp , find new line "<<y.find('\n')<<endl;



    while(i){

        if(s.top()==">")
           {
            s.pop();i--;
           // cout<<""
            if(s.top()=="<")
               { s.pop();
                   i--;
            }
            else
               {  cout<<"errrrrrorrr  in line "<<num_line <<" one bracket is missing or error in bracket format";
                i=0;
                 break;
            }
            }
        else {
            cout<<"errrrrrorrr  in line "<<num_line <<"  bracket is missing or error in bracket format";
            i=0;
        }
    }

           if(!s.empty())

            { cout<<"errrrrrrrrrrrrrrrrrrrorrrrrrrr\n ";
               cout<<"error in index ............ " <<num_line<< endl;
          // break;
               }
           else
               cout<<"noooooooooo errrrrrrrrrrror \n";

           while(!s.empty())
               s.pop();
}
*/
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
           cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line ....."<<line.top()+1<<"missing closing tag of "<<s_name.top()<<endl;
           //////////////// correct


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
           cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line ....."<<line.top()+1<<"  missing closing tag of "<<s_name.top()<<endl;
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
                cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line ....."<<line.top()+1<<"  missing closing tag of "<<s_name.top()<<endl;
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
                cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line ....."<<line.top()+1<<"  missing closing tag of "<<s_name.top()<<endl;
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
           cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line ....."<<num_line +1<<"\n"<< temp<< " invalid tag name "<<endl;
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
           cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line ....."<<num_line +1<<"\n"<< temp<< " invalid tag name "<<endl;
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
                  cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line ....."<<num_line+1<<"\n"<< temp<< " invalid tag name "<<endl;
                  //////////////// correct
                  ///
                     //correct(y,temp,num_line);
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
                  cout<<"errrrrrrrrrrrrrorrrrrrrrrr in line ....."<<num_line+1<<"\n"<< temp<< " invalid tag name "<<endl;
                  //////////////// correct
                  ///
                     //correct(y,temp,num_line);
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
/*
void  sub_string:: get_vector(string y, int num_line ){
   string temp;
   int i=0;
   int num;
   //cout<<"my zeftttttttttttttt "<< y<<endl;
   num = get_num_of_brackets( y,  num_line );
   //cout<<"nummmmmmmmmmnnnnnnnnn  "<<num;
   if(num==2 ){
   if(y.find(' ')>y.find('>')){
       temp=y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
       if(temp[0]!='!' )
      {

      ms.push_back(temp);
       //cout<<"my stack is "<< s_name.top()<<endl;

   }else
   {
       temp=y.substr(y.find('<')+1,y.find(' ')-y.find('<')-1);
       if(temp[0]!='!')
      {
       ms.push_back(temp);
     //  cout<<"my stack is "<< s_name.top()<<endl;
       }


   }
   }}
   int m=2;
   if(num==4  ){
       while(m>0){
            m--;
       if(y.find(' ')>y.find('>')){
           temp=y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
           y= y.substr(y.find('>')+1);
           y= y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
           if(temp[0]!='!' )
          {
          ms.push_back(temp);
           //cout<<"my stack is "<< s_name.top()<<endl;
           }

       }
       else
       {
           temp=y.substr(y.find('<')+1,y.find(' ')-y.find('<')-1);
           y= y.substr(y.find('>')+1);
           y= y.substr(y.find('<')+1,y.find('>')-y.find('<')-1);
           if(temp[0]!='!' )
          {
          ms.push_back(temp);
          // cout<<"my stack is "<< s_name.top()<<endl;
           }

       }


   }

   }
//cout<<"vector siiiiiiiiize "<< ms.size();

   }

int sub_string:: getIndex(vector<string> v,string K)
{
   int index;
   auto it = find (v.begin(), v.end(), K);

   // If element was found
   if (it != v.end())
   {

       // calculating the index
       // of K
        index = it - v.begin();
       cout << index << endl;
   }
   else {
       // If the element is not
       // present in the vector
       cout << "-1" << endl;
   }
   return index;
}

void  sub_string :: missing_tag(vector<string> v ){

string temp;
int i=1;
int num1;
int current;
int num = getIndex( v,"/"+v[0]);
if  ((num-1)%2!=0)
{
   while(1){
   cout<<"missssssing \n";
    current=getIndex( v, v[i]);
   num1 = getIndex( v,"/"+ v[i]);
   if((num-current-1)%2!=0){

//////// mising



   }
   else
       i=getIndex( v,"/"+ v[i])+1;
}}

else
{

   //no missing
}

}

////////

/*
 *
 *
 *
 * #include<iostream>
#include "sub_string.h"
#include<string>
#include<cstring>
#include <bits/stdc++.h>
#include <stack>
#include <vector>
 * */

/*
 *
 *   void get_string (string y);
   void  get_brackets(string y);
void  get_line(string y);
void  check_brackets(string y , int num_line);
void  check_tags(string y, int num_line );
int    get_num_of_brackets(string y, int num_line );
void  divide_str(string y, int num_line );
void  missing_tag(vector<string> v );
void   get_vector(string y, int num_line );
   int getIndex (vector<string> v,string K);
 * */
