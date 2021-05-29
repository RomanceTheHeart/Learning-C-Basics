/* This file will be uploaded to the  C++ intermidiate repository. 
Simple Critter, demonstrates creating a new type. 
*/
#include<iostream> 
using namespace std; 
class Critter
{
    private:
    public:
      static int count;
    Critter(){}
     int Hunger{0};
    void Greet();
   static inline int CritterTotal(){count ++; return count;}
    inline int IncrementHunger(){Hunger++; return Hunger;}
 void DisplayCount(){int crittertotal = CritterTotal(); cout << crittertotal;}
  void DisplayHunger(){int critterHunger = IncrementHunger(); cout << critterHunger;}
};
;
 int Critter::count{0};
int main()
{
    
    Critter crit1; 
    Critter crit2;
    Critter crit3;
    
    crit1.Hunger={30};
    crit2.Hunger={60};
    crit3.Hunger = {100}; 
 
    cout << "Critter: ";
    crit1.DisplayCount();
    crit1.Greet();
    
    cout << "Critter: ";
    crit2.DisplayCount();
    crit2.Greet();

    cout << "Critter: ";
    crit3.DisplayCount();
    crit3.Greet();
}
void Critter::Greet()
{
    cout << "\nHi, I'm a critter." 
    << " My hunger level is: " << Critter::IncrementHunger() << " now\n";
}