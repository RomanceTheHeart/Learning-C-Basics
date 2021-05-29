/* This file will be uploaded to the  C++ intermidiate repository. 
Simple Critter, demonstrates creating a new type. 
*/
#include <iostream>
using namespace std;
class Critter
{
private:
    int Hunger{0};
    static int count;

public:
    Critter() : Hunger(100) { cout << "A new critter is born.\n"; }
    ~Critter() { "Ah!"; }
    void Greet();
    int GetHunger();
    void SetHunger(int &hunger);
    void DisplayHunger();
    static int DisplayCount();

    static inline int IncrementCritter()
    {
        count++;
        return count;
    }
    inline int IncrementHunger()

    {
        Hunger++;
        return Hunger;
    }
};

int Critter::count{0};

int main()
{

    Critter crit1,crit2,crit3;
   
    int hunger = crit3.GetHunger();
    hunger = 300;
    crit3.SetHunger(hunger);
    
    cout << "\nCritter: ";
    cout <<Critter::IncrementCritter(); 
    crit1.Greet();

    cout << "\nCritter: ";
    cout<<Critter::IncrementCritter();
    crit2.Greet();

    cout << "\nCritter: ";
    cout <<Critter::IncrementCritter();
    crit3.Greet();
  
    cout << "There are: " << Critter::DisplayCount() << " Critter's on the board."  << endl; 
    return 0; 
}
void Critter::Greet()
{
    cout << "\nHi, I'm a critter."
         << " My hunger level is: " << IncrementHunger() << " now\n";
}

int Critter::GetHunger()
{
    return Hunger;
}
void Critter::SetHunger(int &hunger)
{
    if (hunger == 0)
    {
        cout << "Critter Died. \n";


    }
    else if (hunger < 0){ hunger = 0; cout << "Critter Died"; }
    else
    {
        Hunger = hunger;
    }

}

int Critter::DisplayCount()
{

    return count; 
}

void Critter::DisplayHunger()
{
    int critterHunger = IncrementHunger();
    cout << critterHunger;
}