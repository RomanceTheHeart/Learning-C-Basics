 // This program is an example of how to set defualt paramters in functions 
 #include <iostream> 
 #include <string> 
 using namespace std; 

 int AskNumber(int high,int low = 1);

 int main()
 {
     int number = AskNumber(100);
    cout << "Thanks for Entering: " << number << endl; 
    number = AskNumber(100,5);
    cout << "Thanks for Entering : " << number << endl; 

    return 0; 

 }

int AskNumber(int high, int low)
{
    int num;
    do
    {
        cout << "Please enter a number: " << "(" << low  << "-"  << high << ")"; 
        cin >> num;
    } while (num > high || num < low);
    return num; 
    
}