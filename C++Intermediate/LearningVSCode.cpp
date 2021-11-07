#include <iostream>


using namespace std;

int main()
{
    string names[5]{"andrew","tom","Derrick","Sara","Megan"};

    for(int i{0}; i <sizeof(names); i++)
    {
        cout << names[i] << endl; 
        cout << endl;
    }
    
    
    
    
    return 0; 

}