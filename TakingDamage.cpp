// This simple program demostrats the use of inline fuctions.
#include <iostream>
using namespace std;

inline int Radiation(int health)
{

    for (int i = health; i <= health; --i)
    {

      cout << "You Health  is now: " << i << endl;
        if (i ==0){
            cout << " You have died!" << endl; 
            break;}
    }
    return health;
}

int main()
{
    int health{100};
    int pow{0};
    
 Radiation(health);
}