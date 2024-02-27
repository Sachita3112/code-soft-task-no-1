#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    int guess, numGuesses = 0, maxAttempts = 5, roundsWon = 0;
    char playAgain = 'y';

    while (playAgain == 'y')
    {

        cout << "\nGuess the number between 1 and 100: ";

        while (numGuesses < maxAttempts)
        {
            cin >> guess;
            numGuesses++;

            if (guess < randomNumber)
             {
                cout << "Too low! Guess again: ";
            } else if (guess > randomNumber)
            {
                cout << "Too high! Guess again: ";
            } else
            {
                cout << "Congratulations! You guessed the number in " << numGuesses << " attempts!" << endl;
                roundsWon++;
                break;
            }
        }

        if (numGuesses == maxAttempts)
        {
            cout << "You ran out of attempts! The number was " << randomNumber << endl;
        }

        cout << "Your score: " << roundsWon << " rounds won" << endl;

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        randomNumber = rand() % 100 + 1;
    }

    return 0;
}
