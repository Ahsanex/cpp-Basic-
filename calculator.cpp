#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    cout << " Enter Your Name User " << endl;
    string name;
    getline(cin,name);
   //cout << "are you sure ur name is " << Name << endl;
    cout << "Please Enter 2 numbers " <<  endl;
    int x;
    int y;
    cin >> x;
    cin >> y;
    cout << "TYPE + for Additon and - for Subtraction , * FOR Multiplication and % for division" << endl;
    char ch;
    cin >> ch;
    if(ch!='+' && ch!='-' && ch!='*' && ch!='%')
    {
      
        cout << "ENTERED CHOICE IS INVALID" << endl;  
 
    }
    else
    {
        if(ch=='+')
         {
             auto sum = x + y;
             cout << "Result: " << sum << endl;
         }
        else if(ch== '-')
        {
              auto diff = x - y;
              cout << "Result: " << diff << endl;
        }
         else if(ch== '*')

       {

          auto prod = x*y;
                   cout << "Result: " <<  prod << endl;


       }

       else if(ch== '%')

       {

          auto remainder = x%y;
                   cout << "Result: " <<  remainder << endl;


       }



    }
     return 0;
 
 
 
 




}