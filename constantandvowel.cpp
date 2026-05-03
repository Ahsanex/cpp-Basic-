#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{

    cout << "Enter Your Word User : "<< endl;
    string word;
    cin >> word;
    
    for(int i = 0; i< word.length() ; i++)
    {
       char ch = word[i];
       if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
       {
           cout << ch << " IS A VOWEL IN WORD " << word << endl ;
        }
    else 
    {
        cout << ch << " is a consonent " << endl ;
    }


    }
 




}



//JOHN
//0123