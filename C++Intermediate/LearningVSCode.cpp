#include <iostream>
#include <stdio.h>
#include "string"
#include <array>

using namespace std;

int GetLength(char input[]) // make sure function takes in the same value as intended.
{
    int count{0};
    

    for ( int c = {0}; input[c] != '\0'; c++)
    {count = input[c];}
        return count++;
}

char ReverseString(char input[])
{
    int start = input[0];
    int end = {GetLength(input)};
char result; 

  while(start < end)
  {
        swap(end,start);
        result = input[start,end]; 
        cout << "Fuck this!!" << endl; 
        
  }

  return result; 
}

void Print(char input[])
{
   

    for(int i{0};  input[i] != '\0'; ++i)
    {
     
      printf("%c",input[i]); 
    }

       



}
int main()
{
    int limit{2};
    char input[100];
    char response;

    // should be space for the null charcter.
    cout << "Enter you name: " << endl;

    for( int j{0}; j < limit; j++)
    {
        cin.getline(input, 100);

       
        ReverseString(input); 
            
          Print(input); 
        

    }

    system("pause");

    
}