/*
This program demonstrates how to pass objects in functions
through pointers the wrong way and the right way.
*/
#include<iostream> 
using namespace std; 

inline void RefSwap(int &x, int &y){ int temp={x}; x=y; y=temp;} // Change values with refferences
void PointSwap(int *const pX,int *const pY);

int main()
{
    
    int MyScore{900};
    int YourScore{300};
    {
    cout << "\n\t Swapping values with refferences\n";
    cout << "My score before swap: " << MyScore << endl; 
    cout << "Your score before swap: " << YourScore << endl; 
    RefSwap(MyScore,YourScore);
    cout << " My score after swap: " << MyScore << endl; 
    cout << "Your score after swap: " << YourScore << endl;
    } 

{
       cout << "\n\t Swapping values with Pointers\n";
    cout << "My score before swap: " << MyScore << endl; 
    cout << "Your score before swap: " << YourScore << endl; 
    PointSwap(&MyScore,&YourScore);
    cout << " My score after swap: " << MyScore << endl; 
    cout << "Your score after swap: " << YourScore << endl;
}
}

void PointSwap(int *const pX,int *const pY)
{
    //store value pointed to pX in temp;
    int temp{*pX}; 
    // store value pointed to by pY in address pointed to by pX
    *pX = *pY; 
    //store the value originally pointed to by pX in address pointed to by pY
    *pY = temp; 
}
