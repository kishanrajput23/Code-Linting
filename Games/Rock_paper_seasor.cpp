#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation
    char playerChoice, computerChoice;
    
    cout << "Welcome to Rock, Paper, Scissors!" << endl;

    while (true) {
        // Get player's choice
        cout << "Enter your choice (R for Rock, P for Paper, S for Scissors, Q to quit): ";
        cin >> playerChoice;

        if (playerChoice == 'Q' || playerChoice == 'q') {
            cout << "Thanks for playing! See you again" << endl;
            break;
        }

        // Generate a random choice for the computer
        int random = rand() % 3;
        switch (random) {
            case 0:
                computerChoice = 'R';
                cout << "Computer chose Rock." << endl;
                break;
            case 1:
                computerChoice = 'P';
                cout << "Computer chose Paper." << endl;
                break;
            case 2:
                computerChoice = 'S';
                cout << "Computer chose Scissors." << endl;
                break;
        }

        // Determine the winner
        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 'R' && computerChoice == 'S') ||
                   (playerChoice == 'P' && computerChoice == 'R') ||
                   (playerChoice == 'S' && computerChoice == 'P')) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
    }

    return 0;
}
