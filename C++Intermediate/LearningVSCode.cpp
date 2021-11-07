#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;

int main()
{
    int limit{6};
    char input[100];
    char response;

    // should be space for the null charcter.
    cout << "Enter you name: " << endl;

    for (int j{0}; j < sizeof(input); j++)
    {
        cin.getline(input, 100);

        if (sizeof(response) < input[j])
        {

            response = input[j];
            printf("%c", response);
        }
        else{break;}
    }


    system("pause");

    return 0;
}