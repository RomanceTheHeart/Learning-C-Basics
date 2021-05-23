/*
The mad library game asks for the user's help in creating a story. The user supplies the name 
of a person, a plural noun, a number, a body part, and a verb. the program takes all of this 
information and uses it to creeate personlized story. 
written by Gerard Paul.
*/
#include <iostream>
#include <string>
using namespace std;

string AskText(string prompt);
int AskNumber(string prompt);
void TellSory(string name, string noun, int number, string bodypart, string verb);

int main()
{

    cout << "\n Welocome to the MadLib. \n";
    cout << "Answer the following  questions to help create a story.\n";
    string name = AskText("Please enter a name: ");
    string noun = AskText("Please enter a noun: ");
    int number = AskNumber("Please enter a number: ");
    string body = AskText("Please enter a body part: ");
    string verb = AskText("Please enter a verb: ");
    cout << endl;
    TellSory(name, noun, number, body, verb);
}

string AskText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}
int AskNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}
void TellSory(string name, string noun, int number, string bodypart, string verb)
{
    cout << "\n Here's your story: \n";
    cout << "The famous explorer ";
    cout << name;
    cout << " had nearly given up a life long quest to find\n";
    cout << noun;
    cout << " when one day, the ";
    cout << noun;
    cout << " found the explorer. \n";
    cout << " Surrounded by ";
    cout << number;
    cout << " " << noun;
    cout << " , a tear came to ";
    cout << name << "'s ";
    cout << bodypart << ". \n";
    cout << "After all of this time, the quest finally came to an end. ";
    cout << "And then, the ";
    cout << noun << "\n";
    cout << "promptly devoured ";
    cout << name << ". ";
    cout << "The moral of the story? Be careful what you ";
    cout << verb;
    cout << " for. " << endl;
}