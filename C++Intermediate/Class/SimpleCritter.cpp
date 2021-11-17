/* This file will be uploaded to the  C++ intermidiate repository. 
Simple Critter, demonstrates creating a new type. 
*/
#include <iostream>
using namespace std;
class Critter
{
private:
    int Hunger{0};
    int Boardom{0};
    static int count;

    inline int GetMood() const { return (Hunger + Boardom); } //returns these two values combined.

    // Marked private, because it will only be called by other member fucntiions.
    void PassTime(int time = {1});

public:
    Critter() : Hunger(0), Boardom(0) { cout << "A new critter is born.\n"; }
    Critter(int hunger, int boardom) : Hunger(hunger), Boardom(boardom) {}
    ~Critter() { "Ah!"; }
    void Greet();

    //TODO Implement these 4 functions.
    void Talk();
    void Eat(int food = {4});
    void Play(int fun = {4});

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

    Critter crit1, crit2, crit3;

    int hunger = crit3.GetHunger();
    hunger = 300;
    crit3.SetHunger(hunger);

    cout << "\nCritter: ";
    cout << Critter::IncrementCritter();
    crit1.Greet();

    cout << "\nCritter: ";
    cout << Critter::IncrementCritter();
    crit2.Greet();

    cout << "\nCritter: ";
    cout << Critter::IncrementCritter();
    crit3.Greet();

    cout << "There are: " << Critter::DisplayCount() << " Critter's on the board." << endl;
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
    else if (hunger < 0)
    {
        hunger = 0;
        cout << "Critter Died";
    }
    else
    {
        Hunger = hunger;
    }
}

int Critter::DisplayCount()
{

    return Critter::count;
}

void Critter::DisplayHunger()
{
    int critterHunger = IncrementHunger();
    cout << critterHunger;
}

void Critter::PassTime(int time)
{
    //As time goes by the more board and hungry
    // your critter becomes.
    Hunger += time;
    Boardom += time;
}

void Critter::Talk()
{
    cout << "I'm a Critter:\n"
         << " I feel ";
    int mood = GetMood();
    if (mood > 15)
    {
        cout << "mad.\n";
    }
    else if (mood > 10)
    {
        cout << "frustrated. \n";
    }
    else if (mood > 5)
    {
        cout << "okay.\n";
    }
    else
    {
        cout << "happy!\n";
    }
    PassTime();
}


void Critter::Eat(int food)
{
    cout << "BRRrrp!!\n";
    Hunger -= food;
    if (Hunger < 0)
    {
        Hunger = 0;
    }
    PassTime();
}

void Critter::Play(int fun)
{

    cout << " Wee! I'm having a blast!\n ";
    Boardom -= fun;
    if (Boardom < 0)
    {
        Boardom = 0;
    }
    PassTime();
}

