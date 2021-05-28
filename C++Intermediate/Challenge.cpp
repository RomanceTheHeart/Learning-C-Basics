// would these have the same address. Yes. 
#include<iostream>
using namespace std; 

int main()
{
    int a{20};
    int &b=a;
    int*c =&b; 
    cout << &a << endl; 
    cout << &b << endl; 
    cout << &(*c)<< endl; 

}
