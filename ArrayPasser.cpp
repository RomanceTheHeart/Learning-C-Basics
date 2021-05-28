//This program demostrates the relationship between pointers and arrays.

#include <iostream>
using namespace std;
void Increase(int *const array, const int NUM_ELEMENTS);
void Display(const int *const array, const int NUM_ELEMENTS);

int main()
{
    //specifies how many elements in this container.
    const int NUMSCORES{3};
    // holds an array of NumScores(3)
    int Highcores[NUMSCORES]{5000, 3000, 2500};

    cout << "Display the values in High Scores:\n";
    //Displays the first, second, and third values in Highscore
    //using array as a constant pointer:
    cout << (*Highcores) << ", " << *(Highcores + 1) << ", " << *(Highcores + 2) << endl;
    // Increase the value of each score.
    Increase(Highcores, NUMSCORES);
    cout << "Increment\\Iterate:\n";
    Display(Highcores, NUMSCORES);
}
void Increase(int *const array, const int NUM_ELEMENTS)
{ // iterate through each score and
    //  increase the value by 1
    for (int i{0}; i < NUM_ELEMENTS; ++i)
    {
        ++array[i];
    }
}

void Display(const int *const array, const int NUM_ELEMENTS)
{
    //Display the contents of this container.
    for (int i{0}; i < NUM_ELEMENTS; ++i)
    {
        cout << array[i] << endl;
    }
}