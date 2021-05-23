#pragma warning(disable: 4786)
#include <iostream>
#include <vector> 
#include "algorithm"
#include <functional>
#include <ctime> 
#include<cstdlib> 
using namespace std; 

class algorithm;

int main()
{

vector<int>::const_iterator Iter; 
vector<int>Scores;
Scores.push_back(1500);
Scores.push_back(3500); 
Scores.push_back(7500); 

cout <<"\n High Scores:\n"; 

for (Iter = Scores.begin(); Iter != Scores.end(); ++Iter)
{
    cout<< *Iter << endl; 


}


cout << "Finding a score. "; 
int score; 
cout << "Enter a score to find: "; 
cin >> score;
Iter = find(Scores.begin(), Scores.end(),score); 
if(Iter != Scores.end())
{
cout << "Score Found! "; 
}
else 
{
    cout << "Score not found.";
}
cout << "Now let's randomize the Scores:";

srand(static_cast<int>(0)); 

printf("");
cout << *Iter << endl; 



return 0; 
}       