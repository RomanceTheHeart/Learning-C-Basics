#include <iostream>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include "string"
#include <array>

using namespace std;

// This lesson focuses on 2d arrays.

const int numRows{2};
const int numCollums{30};

void PrintArray(char jarray[numRows][numCollums], char word, char otherword)
{
    const int *row = &numRows;
    const int *collum = &numCollums;
    char *result = &jarray[*row][*collum];
    for (int i{0}; i < *row; i++)
    {
            cout << word << " ";
              cout << endl; 
        for (int j{0}; j < *collum; j++)
        {
            
            
            cout << otherword << " ";
          
        }
    }
}
int main()
{
    char w;
    char ow;
    char DArray[numRows][numCollums]{{w},{ow}};

    cout << "Enter number of Rows and Collums: ";
    for (int Y{0}; Y <numRows; Y++)
    {
        cin >> w;
        if(w =='\0'){break;}
        for (int Z{0}; Z < numCollums; Z++)
        {
            cin >> ow;
               if(ow =='\0'){break;}
        }
    }
    PrintArray(DArray, w, ow);
    printf("\n"); 

    system("pause");

    return 0;
}