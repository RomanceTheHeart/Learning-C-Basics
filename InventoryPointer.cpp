/*
This program demonstrate returning pointers. 
Through the returned pointers the program displays 
and even alters the values of a vector that holds a hero's 
invetory. 
*/
#include <iostream>
#include <string> 
#include <vector> 
using namespace std; 
//returns a pointer to a string element
void Display(const vector<string>& inventory);
string* PtrToElement(vector<string>*const Pvec, int i); 
 
 int main()
 {
     vector<string> inventory; 
     inventory.push_back("SWORD"); 
     inventory.push_back("ARMOR"); 
     inventory.push_back("SHIELD"); 


cout << "Sending the object pointed to via PtrToElement(): ";
cout <<*(PtrToElement(&inventory,0));
//assign one pointer to the other -- inexpensive assigment. 
//assigning the returned pointer to another pointer: 
string *Pstring = PtrToElement(&inventory,1); 
*Pstring = "Duck"; 
cout << "\nSending the new string via PtrToElement(): "; 
cout << *(PtrToElement(&inventory,1));
cout << "\nNew Inventory:\n";
Display(inventory);
 }

 string* PtrToElement(vector<string> *const Pvec, int i)
 {
      //returns address of the string in position [i] of vector that Pvec points to. 
      // Note that this function does not return a local variable. 
      return &((*Pvec)[i]);
 }

void Display(const vector<string>& inventory)
{

    for(vector<string>::const_iterator iter = inventory.begin();
     iter != inventory.end(); ++iter )
    {
        cout << *iter << endl; 
    }
}