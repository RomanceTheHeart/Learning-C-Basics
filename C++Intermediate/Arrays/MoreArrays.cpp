#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <cstring>
#include "string"
#include <array>

using namespace std;

// This lesson focuses on 2d arrays.
// In this  lesson I learned alot about how character arrays
// differ from string arrays.

const int numRows{2};
const int numCollums{2};

int GetIndex(char input[]) // make sure function takes in the same value as intended.
{
    int index{0};

    for (int c = {0}; c < strlen(input); c++)
    {

        index++;
    }

    return index;
}

void PrintArray(int num)
{

    for (int i{0}; i < 5; i++)
    {

        for (int j{0}; j < 6; j++)
        {
            num++;
            cout << num << " ";
        }
        cout << endl;
    }
}

void PrintArray(char one)
{

    for (int i{0}; i < size_t(one); i++)
    {
            one++;
              

        for (int j{0}; j < size_t(one); j++)
        {
                one++;
        }
        cout << endl;
        continue;
        break;
    }
      cout << one << " ";
}

void PrintArray(string one, string two)
{

    for (int i{0}; i < numRows; i++)
    {

        for (int j{0}; j < numCollums; j++)
        {

            cout << one << " ";
            cout << two;
        }
        cout << endl;
    }
}

int main()
{

    int numbers{0};
    char syllables('0');

    string one;
    string two;

    PrintArray(syllables);
    cout << endl;
    cout << endl;

    cout << "Enter Your Name : ";

    for (int Y{0}; Y < numRows; Y++)
    {
        getline(cin, one);

        for (int Z{0}; Z < numCollums; Z++)
        {

            getline(cin, two);
        }
        break;
    }

    PrintArray(one, two);
    PrintArray(numbers);
    printf("\n");

    system("pause");

    return 0;
}