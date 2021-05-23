/*
This program demonstates how global varibales actually work. 
I also added some pointer simantic. Things I learned throughout 
my C++ journey. 
*/
#include <iostream>
using namespace std;

int GlobalInt = 2000; // Global variable
int * Globalptr = & GlobalInt;

int AccessGlobal();
int HideGlobal();
int ChangeGlobal(int *Globalptr);

int main()
{

    int global = AccessGlobal();
    cout << "\nThis is the actual global variable value : " << global << endl;

    int globalhidden = HideGlobal();
    cout << "Here's where we hide the value of GlobaInt : " << globalhidden << endl;

    ChangeGlobal(Globalptr);
    cout << "Now I changed the value through a function call : " << GlobalInt << endl;

    cout << "The final value for GlobalInt is Still : " << GlobalInt << endl;
    
    return 0;
}

int AccessGlobal() { return GlobalInt; }
int HideGlobal()
{
    GlobalInt = 5;
    cout << "The hidden global varible is also the local variable in this function : " << GlobalInt << endl;
    return GlobalInt;
}
int ChangeGlobal(int *Globalptr)
{
    *Globalptr = 24;
    return *Globalptr;
}