#include <iostream> 
#include <string>
using namespace std;

int Tripple(int number);
string Tripple(string text);



int main()
{
    int integer{9};
    string text {"Money"};

cout << "Tripple 5: " << Tripple(integer) << endl;
cout << " Tripple" << text << Tripple(text) << endl; 

}

int Tripple(int number)
{
    return number *3; 
}
string Tripple(string text)
{
    cout << " : ";
    return text + " " + text +" " + " " + text;
}