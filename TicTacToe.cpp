/*
-Create an empty tic-tak-toe board.
-Display the game instructions. 
-Determine who goes first. 
-While no one has wom the game, and it's not a tie
-If it's the human's move update the board with the human's move. 
-Otherwise
-Calculate the computer's next move
-Update the board with the computer's move. 
-Dislay the board. 
-Switch turns. 
-Congratulate the winner or declare a tie. 
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Globals
const char X{'X'};
const char O{'O'};
const char EMPTY{' '};
const char TIE{'T'};
const char NO_ONE{'N'};
void Instructions();
char AskYesNo(string question);
int AskNumber(string question, int high, int low = {0});
char HumanPiece();
char Opponent(char piece);
void DisplayBoard(const vector<char> &board);
char Winner(const vector<char> &board);
bool IsLegal(int move, const vector<char> &board);
int HumanMove(const vector<char> &board, char human);
int ComputerMove(vector<char> board, char computer);
void AnnounceWinner(char winner, char computer, char human);

int main()
{
    int move;
    const int NUMSQUARES{9};
    vector<char> board(NUMSQUARES, EMPTY);

    Instructions();

    char Human={HumanPiece()};
    char Computer={Opponent(Human)};
    char turn = {X};

    DisplayBoard(board);

    while (Winner(board) == NO_ONE)
    {
        if (turn == Human)
        {
            move = HumanMove(board, Human);
            board[move] = Human;
        }
        else
        {
            move = ComputerMove(board, Computer);
            board[move] = Computer;
        }

        DisplayBoard(board);
        turn = Opponent(turn);
    }
    AnnounceWinner(Winner(board), Computer, Human);
    return 0;
}

void Instructions()
{
    printf("\tTic-Tac-Toe\n");
}

char AskYesNo(string question)
{
    char response;
    do
    {
        cout << question << "(Y/N)";
        cin >> response;
    } while (response != 'y' && response != 'n');

    return response;
}

int AskNumber(string question, int high, int low)
{
    int number;
    do
    {
        cout << question << "(" << low << "-" << high << ") ";
        cin >> number; 
    } while (number > high || number < low);

    return number;
}

char HumanPiece()
{
    char gofirst = AskYesNo("Do you want to go first??: ");
    if (gofirst == 'y')
    {
        cout << "\nThen I'll take the first move.\n";
        return X;
    }
    else
    {
        cout << "\nOkay. \n Let's GO!\n";
        return O;
    }
}

char Opponent(char piece)
{
    if (piece == X)
    {
        return O;
    }
    else
    {
        return X;
    }
}

void DisplayBoard(const vector<char> &board)
{
    cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t"
         << "--------";
    cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
    cout << "\n\t"
         << "--------";
    cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
    cout << "\n\n";
}

char Winner(const vector<char> &board)
{
    // All possible winning rows in an array.
    const int WINNINGROWS[8][3]={{0, 1, 2},
                                {3, 4, 5},
                                {6, 7, 8},
                                {0, 3, 6},
                                {1, 4, 7},
                                {2, 5, 8},
                                {0, 4, 8},
                                {2, 4, 6}
                                };
    const int TOTALROWS = 8;
	//if any winning row has three values that are the same (and not EMPTY),
	//then we have a winner
    for (int row = 0; row < TOTALROWS; ++row)
    {
        if ((board[WINNINGROWS[row][0]] != EMPTY) &&
         (board[WINNINGROWS[row][0]] == board[WINNINGROWS[row][1]]) &&
            (board[WINNINGROWS[row][1]] == board[WINNINGROWS[row][2]]))
        {
            return board[WINNINGROWS[row][0]];
        }
    }
    //Since nobody has won, check for a tie. ("no empty spaces left.")
    if (count(board.begin(), board.end(), EMPTY) == 0){ return TIE;}
  
  //since no one has won an it's a tie, the game is still going.
    return NO_ONE;
}

inline bool IsLegal(int move, const vector<char> &board) { return (board[move] == EMPTY); }

int HumanMove(const vector<char> &board, char human)
{
    int move = AskNumber("Where will you move?", (board.size()));
    while (!IsLegal(move, board))
    {
        cout << "\nThat square is already occupied.\n";
        move = AskNumber("Where will you move?: ", (board.size(),-1));

    }
    cout << "Okay :)\n";
    return move;
}


int ComputerMove(vector<char> board, char computer)
{

    unsigned int move{0};
    bool found{false};
    //if computer can win on next move, that's the move to make.
    while (!found && move < board.size())
    {
        if (IsLegal(move, board))
        {
            board[move] == computer;
            found = Winner(board) == computer;
            board[move] = EMPTY;
        }

        if (!found)
        {
            ++move;
        }
    }

    //otherwise, ,moving to the best open square is the move to make.
    if (!found)
    {

        move = {0};
        char human = Opponent(computer);

        while (!found && move < board.size())
        {
            if (IsLegal(move, board))
            {
                board[move] = human;
                found = Winner(board) == human;
                board[move] = EMPTY;
            }

            if (!found)
            {
                ++move;
            }
        }
    }
    //otherwise, moving to the best open square is the move to make.
    if (!found)
    {
        move = 0;
        unsigned int i = 0;
        const int BESTMOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
        //Pick best open square.
        while (!found && i < board.size())
        {
            move = BESTMOVES[i];
            if (IsLegal(move, board))
            {
                found = true;
            }
            ++i;
        }
    }
    cout << "I shall take square number " << move << endl;
    return move;
}

void AnnounceWinner(char winner, char computer, char human)
{
    if (winner == computer)
    {
        cout << winner << " has won! \n"
             << endl;
    }
    else if (winner == human)
    {
        cout << winner << " has won!!\n"
             << endl;
    }
    else
    {
        cout << "It's a tie :)\n"
             << endl;
    }
}