#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Welcome to the game!" << endl;
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    cout << "Guess the random number between 1 and 100." << endl;
    int guess;
    while (true)
    {
        cout << "Guess your number, por favor: ";
        cin >> guess;
        if (guess < randomNumber)
        {
            cout << "You guessed it too low dude!! go lil up.." << endl;
        }
        else if (guess > randomNumber)
        {
            cout << "You guessed it too high dude!! go lil down.." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number!" << endl;
            break;
        }
    }
    // cout << "The random number is: " << randomNumber << endl;
    return 0;
}