/*
This Program creates a varible for a score them creates a pointer to store the address of that varible. 
The program, shows that you can change the value of a varible directly, and the pointer will reflect the change. 
It also shows that you can change the value of a varible through a pointer. 
*/
#include <iostream> 
#include <string> 
using namespace std; 

int main()
{
int *PScore{nullptr}; // Declare a pointer. 
int Score{5000};  // Delcare the integer
PScore={&Score};  // assign the pointer to the address of that integer. 
{
    cout << "\n\t\tINTEGER'S AND POINTERS\n";
cout <<"This is the address of Score :" << &Score << endl; 
cout << "This is the address of PScore: " << PScore << endl; 
cout << "The value of Score is: " << Score << endl; 
cout << "The value of PScore is: " <<*PScore << endl; 
cout <<"Let's add 500 to Score: " << ((Score)+=500);
cout << "\nPScore changed as well " << *PScore;
cout <<"\n";
cout << "Let's change the value of PScore: "<< ((*PScore)+=500);
cout << "\nNow, core has changed as well : " << Score;
}
{
int NewScore{1000000};
PScore={&NewScore}; 
cout << "\nScore is still: " << Score; 
cout <<"\nHowever, I reassigned PSCore to a new address: " << PScore; 
cout << "\nTherefore it's value has changed: " << *PScore << endl; 
cout  << "Score's address is still: " << &Score << endl; 
}
{
string Str{"Hello Worlds"}; 
string *PStr={&Str};
cout << "\n\t\tPOINTERS AND STRINGS\n"; 
cout << "Str reads: " << Str << endl; 
cout << "PStr read: " <<*PStr << endl; 
cout << "The size of Str.size() is: " << Str.size() << endl ; 
cout << "The size of PStr->size() is: "<< PStr->size() << endl; 
cout << "The size of PStr.size() is: "<< (*PStr).size() << endl; 


}

}