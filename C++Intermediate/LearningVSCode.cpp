#include <iostream>
#include <stdio.h>
#include "string"
#include <array>

using namespace std;


char PrintString(char input[])
{
    char response;
    for (int i{0}; i != '\0'; i++)
    {
        response = input[i];
        cout << response << endl;

       
    }
     return response++;
}

int GetLength(char input[]) // make sure function takes in the same value as intended.
{
    int count{0};

    for ( int c = {0}; input[c] != '\0'; c++)
    {count = input[c];}
        return count++;
}

void ReverseString(char input[])
{
    int start = 0;
    int end = {GetLength(input)};
    swap(start, end);
}

int main()
{
    int limit{6};
    char input[100];
    char response;

    // should be space for the null charcter.
    cout << "Enter you name: " << endl;

    for( int j{0}; j < sizeof(input); j++)
    {
        cin.getline(input, 100);

        if (sizeof(response) < input[j])
        {

            response = input[j];
            printf("%c", response);
            PrintString(input); 
        }
    
    }

    system("pause");

    ;
}