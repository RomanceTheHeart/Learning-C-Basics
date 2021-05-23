/*
This small program is an example of refference usage in function parameters 

*/
#include <iostream>
using namespace std;

void BadSwap(int x, int y)
{
    int temp{x};
    x = y;
    y = temp;
}
void GoodSwap(int &x, int &y)
{
    //creating the temp value. creates a place holder to store the new value for y. 
    int temp{x};
    x = y;
    y = temp;
}

int main()
{
    int myscore{500};
    int yourscore{5000};

    cout << "\nThese are the orginal values: "
         << "\nMy Score: " << myscore << "\nYour score: " << yourscore << endl;
    cout << "Calling Bad Swap: ";
    BadSwap(myscore, yourscore);
    cout << " These are the values now: "
         << "\nMy Score: " << myscore << "\nYour score: " << yourscore << endl;
    cout << "Now calling the Good swap: ";
    GoodSwap(myscore, yourscore);
    cout << " These are the values now: "
         << "\nMy Score: " << myscore << "\nYour score: " << yourscore << endl;
}