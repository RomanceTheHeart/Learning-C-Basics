//Inventory refferencer
#include <iostream> 
#include<string> 
#include<vector> 
using namespace std; 

void Display(const vector<string>& inventory)
{
    cout << "Your Items:\n";
    for(vector<string>::const_iterator iter = inventory.begin();
     iter != inventory.end(); ++iter )
    {
        cout << *iter << endl; 
    }
}
// returns a refference to a string'
inline string& RefferenceToElement(vector<string> &inventory, int i){return inventory[i];}

int main()
{
vector<string> INVENTORY; 



INVENTORY.push_back("SWORD");
INVENTORY.push_back("ARMOR"); 
INVENTORY.push_back("SHIELD"); 

// Displays a string that the returned refference reffers to. 
cout << "Sending the returned refference to cout: ";
cout << RefferenceToElement(INVENTORY,0) << endl;

//Assigns one refference to another -- inepensive assigment. 
cout << "Assigning the returned refference to another refference... ";
string& rStr = RefferenceToElement(INVENTORY,1); 
rStr = "Water";
cout << "\nSending the new element to cout: ";
cout << RefferenceToElement(INVENTORY,1);
cout<<"\nNow,";
Display(INVENTORY);

return 0; 
}
