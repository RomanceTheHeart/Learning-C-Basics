/* Sudo code- Create a group of words.
    Pick a random word from the group as the secret word. 
    While the player hasn't made too many incorrect guesses,
    and hasn't guessed the secrete word. Tell the player
    How many incorect guesses he or she has left. 
    Show the player the letters he or she guessed. 
    Show the player how much of the secret word he or she guessed. 
    Get player's next guess, While the player has entered a letter. 
    that he or she has already guessed. Get the player's guess. 
    Add the new guess to the group of used letters. 
    If the guess is the secret word. Tell the player 
    that the guess was correct. Update the word guessed so far with the new letter. 
    Otherwise, Tell the player the guess was incorrect. 
    Increment the number of incorrect guesses that the player has made. 
    If the player has too many incorrect guesses, Tell the player 
    he/she's been hung. otherwise, congratulate the player. 
*/
// Hang Man
// From the book: learing c++ through game programming. 
#include <iostream> 
#include<string> 
#include <vector> 
#include <algorithm>
#include <ctime> 
#include <cctype>
using namespace std; 

int main()
{
// Setup 
const int MAX_WRONG = 8; 
vector<string> Words; 
Words.push_back("GUESS"); 
Words.push_back("HANGMAN"); 
Words.push_back("DIFFICULT"); 
srand(static_cast<unsigned int>(time (0))); 
random_shuffle(Words.begin(),Words.end());

const string THE_WORD = Words[0]; // the word to guess. 
int WrongGuess =0; 
string GuessSoFar{(THE_WORD.size(), ('-'))};  // Word guessed so far. 
string Used {""}; 
cout << "Welcome to Hangman. Good luck. " << endl; 


// Main loop 
while ((WrongGuess < MAX_WRONG) && (GuessSoFar != THE_WORD))
{
    cout << "\n\n You have: " << (MAX_WRONG - WrongGuess); 
    cout << " incorect guesses left. \n";
    cout << "\n You've used the following letters: " <<  Used << endl; 
    cout << "\n So far, the word is: " << GuessSoFar <<"\n" << endl; 
    


// Getting the player's guess 
char guess; 
cout << "\n\n Enter your guess: "; 
cin >> guess; 
guess = toupper(guess); // make uppercase.
while (Used.find(guess) != string::npos)
{
    cout << "\n You've already guessed " << guess << endl; 
    cout << "Enter your guess: "; 
    cin >>  guess; 
    guess = toupper(guess);
}
Used += guess; 

if (THE_WORD.find(guess) != string::npos)
{
    cout << "that's right! " << guess <<  "is in the word.  \n"; 
        // update the GuessSofar varible to include the newly guessed letter.
    for(int i{0}; i < THE_WORD.length(); ++i)
    {
        if(THE_WORD[i] == guess){GuessSoFar[i] = guess;}
    }

}

else
{
 cout << "\nSorry, " << guess << " isn't the right Word. \n" << endl; 
 ++WrongGuess;
 cout << "You've maxed out your guesses at : " << WrongGuess << endl; 

}


}
if (WrongGuess == MAX_WRONG)
{
cout << "\n you've been hanged!! \n " << endl; 

}
else
{
cout << " You did it!! You guessed the  right Word!. "<< endl; 
}
cout <<  "The word was: " << THE_WORD << endl; 

return 0; 
}
