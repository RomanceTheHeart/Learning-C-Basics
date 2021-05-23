/*
    This is a program from the book Learning C++ through game programming.
    This program illustrates the usage of functions in C++. 
*/
#include <iostream>
#include <string>
using namespace std; 

char AskYesNo1(); 
char AskYesNo2(string question);

int main()

{
    char answer1 = AskYesNo1();
    cout << "Thanks for answering: " << answer1 << endl; 
    char answer2 =AskYesNo2("Do you wish to save your game...");
    cout << "Thanks for answering: " << answer2 << endl; 
return 0; 
}

char AskYesNo1()
{
char response1;
//do while statement
do 
{
    cout << "Please enter Y or N: ";
    cin>> response1; 
 
  if ((response1 == 'N') || (response1 == 'n'))
    {
           cout << "\nThanks for asking..." << endl; 
            break;
    } 
    else{ break;}
  
}


while((response1 != 'N') || (response1 != 'n'));


    return response1; 
    
}

char AskYesNo2(string question)
{
    char response2; 
    do 
    {
        cout << question << " (Y/N):"; 
        cin >> response2;


    }while ((response2 != 'y') && (response2 != 'n'));
    return response2; 

}