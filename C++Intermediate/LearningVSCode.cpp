#include <iostream>
#include <stdio.h>
#include <cstring>
#include "string"
#include <array>
using namespace std;

int GetAmount(char amount[])
{
  int total{0};

  for (int g = {0}; g < amount[g]; g++)
  {
    total++;
  }

  return total;
}

int GetIndex(char input[]) // make sure function takes in the same value as intended.
{
  int index{0};

  for (int c = {0}; c < strlen(input); c++)
  {

    index++;
  }

  return index;
}
void Print(char input[])
{

  for (int i{0}; input[i] != '\0'; ++i)
  {

    printf("%c", input[i]);
  }
}

char ReverseString(char input[])
{
  int start = 0;
  int end = {GetIndex(input)};
  char result;

  while (start != '\0' && end != '\0')
  {


    result = input[start, end];
    swap(input[start], input[end]);
    start++;
    end--;
  }
  return result;
}

int main()
{

  int limit{1};
  int count{0};

  char input[100];

  char response;

  cout << " Enter you name: " << endl;

  for (int j{0}; j != limit; j++)
  {

    cin.getline(input, 100);
    count = GetAmount(input);

    break;
  }
  ReverseString(input);
  Print(input);
  cout << "\nThe length of your string is: ";

  cout << count << "\n";

  system("pause");
}