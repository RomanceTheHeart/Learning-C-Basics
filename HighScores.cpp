#pragma warning(disable: 4786)
#include <iostream>
#include <algorithm>
#include <vector> 
#include <ctime> 
#include<cstdlib> 
using namespace std;

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
    cout << "Score not found.\n";
}

cout << "Now let's randomize the Scores:\n";
srand(static_cast<unsigned int>( time (0))); 
random_shuffle(Scores.begin(),Scores.end()); 
cout << "High Scores:" << endl; 

for(Iter = Scores.begin(); Iter != Scores.end(); ++Iter){
cout << *Iter << endl; 
}
cout << "Sorting highscores....\n";
sort(Scores.begin(), Scores.end());
cout << "High Scores:\n";
for(Iter = Scores.begin(); Iter != Scores.end(); ++Iter){
    cout << *Iter <<endl; 
}


return 0; 
}       