#include "iostream"
#include <cstdio>
#include "string.h"
#include <string>
#include <vector>
using namespace std;

 vector<string> Hats
 {

    "Red Hats" , 
    "Blue Hats", 
    "Green Hats", 
    "Grey Hats", 
    "Brown Hats",
    

 };


void PrintHats()
{
 
 vector<string>::const_iterator iter;

    for (iter = Hats.begin(); iter <= Hats.end(); ++iter)
    {   
        cout << *iter << endl; 

    }       

};


int main()
{
 
 PrintHats();
   
}