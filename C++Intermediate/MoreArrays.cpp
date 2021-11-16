#include <iostream>
#include <stdio.h>
#include <cstring>
#include "string"
#include <array>

using namespace std;

// This lesson focuses on 2d arrays.

const int numRows{3};
const int numCollums{3};

int GetIndex(char input[]) // make sure function takes in the same value as intended.
{
    int index{0};

    for (int c = {0}; c < strlen(input); c++)
    {

        index++;
    }

    return index;
}

void PrintArray(char one, char two)
{
    const int *row = &numRows;
    const int *collum = &numCollums;
    
    char result[numRows][numCollums]{{one}, {two}};

    int firstindex = 0;
    int lastindex = GetIndex(*result);

    for (int i{0}; i < *row; i++)
    {
         

        for (int j{0}; j < *collum; j++)
        {
                    
              cout << *result << " ";

  
          
        }
        cout << endl;

     
    }
    
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
    char w(0);
    char ow(0);
    
    string one;
    string two;

    
    cout << "Enter number of Rows and Collums: ";

    for (int Y{0}; Y < numRows; Y++)
    {
        getline(cin,one); 

        for (int Z{0}; Z < numCollums; Z++)
        {

            getline(cin,two);
        }
    }

    PrintArray(one, two);

    printf("\n");

    system("pause");

    return 0;
}