#include <iostream>
#include <array>
using namespace std;

// In an integer array each variable is 4 bytes
void ArrayExample_1()
{
    cout << "This lesson is from the Udemy course on C++ algorithms" << endl;

    int a[4]{4, 3, 2, 1};
    cout << "Printing values: \n";
    for (auto i : a)
    {
        cout << (i) << "%p,\n"
             << endl;
    }
}
void ArrayExample_2()
{
    cout << "Here's one way to initalize values in an array\n";

    cout << endl;
    int a[10]; //initalize the array.

    for (int i{0}; i < 10; i++) // interate.
    {
        a[i] = i * i; // initialize each value in the array.

        cout << "At Position: " << a[i] << endl;
    }
}

void ADDNumber()
{
    cout << "Enter the number of the elements " << endl; 
    int n; 
    cin >> n; 
    int a[n]; // create an array of values. 
    for(int i{0}; i<n; i++)
    {
        cin >> a[i];
    }
    int sum{0};
    for(int i{0}; i<n; i++)
    {
        sum+=a[i];
    }
    cout << sum << endl;
}



void NumberCompare()
{
     int LargestValue = INT_MIN; //minus infinity

 int SmallestValue = INT_MAX; //plus infinity
 
 int Inventory[3]{}; 
 cout << "Enter a number bro:"; 
 for(int i{0}; i < 3; ++i)
 {
     cin >> Inventory[i];
      if(Inventory[i] > LargestValue)
    {
       LargestValue = Inventory[i];
    }
    if(Inventory[i] < SmallestValue)
    {
        SmallestValue  = Inventory[i];
    }
 }

cout << "This is the largest value : " << LargestValue << endl; 
cout << "This is the smallest value :" << SmallestValue << endl; 

swap(LargestValue,SmallestValue); // cool function; 

cout << "This is the largest value : " << LargestValue << endl; 
cout << "This is the smallest value :" << SmallestValue << endl; 


   cout << endl; 
}

void ReverseArray()
{
    const int Number{4};
char NewArray[Number]{};
for(int i{0}; i< Number; i++)
{
    cin >>NewArray[i];

}

for(int i{0}; i <Number; i++)
{
    cout << NewArray[i] << "---Forward-----------> " << endl; 
}

for(int i{Number-1}; i>=0; i--)
{
    cout <<NewArray[i] << "<------Reverse---------" << endl; 
}
}
// char arrays are treated differently
// you don't need a for loop to iterate through this array. 


int main()
{
char name[100]; 
cin  >> name;
int start{name[0]}; 
int end{name[-1]};

if(start >= end)
{
    cout << "name:" << name;
   
}
int count;

for(int i{0}; name[i] != '\0' ; i++)
{
    
    count++; 
}

cout << endl;
cout << "This is the length of the array: " << count; 
cout << endl; 


     
    system("pause");
    return 0;
}