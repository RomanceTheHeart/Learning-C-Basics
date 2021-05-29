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
    void DisplayCount();

    static inline int CritterTotal()
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

    Critter crit1;
    Critter crit2;
    Critter crit3;

    cout << "\nCritter: ";
    crit1.DisplayCount();
    crit1.Greet();

    cout << "\nCritter: ";
    crit2.DisplayCount();
    crit2.Greet();

    cout << "\nCritter: ";
    crit3.DisplayCount();
    crit3.Greet();
    
    return 0; 
}
void Critter::Greet()
{
    cout << "\nHi, I'm a critter."
         << " My hunger level is: " << Critter::IncrementHunger() << " now\n";
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
        hunger = Hunger;
    }
}

void Critter::DisplayCount()
{
    int crittertotal = CritterTotal();
    cout << crittertotal;
}

void Critter::DisplayHunger()
{
    int critterHunger = IncrementHunger();
    cout << critterHunger;
}