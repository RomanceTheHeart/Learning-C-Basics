/*
This program creates a vector of strings to display a hero's inventory. 
*/
#include <iostream> 
#include <string>
#include <vector>
using namespace std; 

//parameter vector is a constant refference to a vector of strings. 
void Display(const vector<string>& inventory);

int main()
{
vector<string> INVENTORY;
INVENTORY.push_back("SWORD"); 
INVENTORY.push_back("ARMOUR"); 
INVENTORY.push_back("SHIELD"); 
Display(INVENTORY); 
}

void Display(const vector<string>& inventory)
{
    cout << "Your Items:\n";
    for(vector<string>::const_iterator iter = inventory.begin();
     iter != inventory.end(); ++iter )
    {
        cout << *iter << endl; 
    }
}