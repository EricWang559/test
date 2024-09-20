#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cout << "choose a lower bound: " << flush;
    int a = 0;
    cin >> a;

    cout << "choose an upper bound: " << flush;
    int b = 0;
    cin >> b;

    srand(time(0)); // Proper seeding for random number generation
    int target = rand() % (b+1) + a; // Generates a number between 0 and 100

    int guesses = 10;
    cout << "Guess a number between " << a << " and " << b << ", inclusive: \n" << flush; 
    cout << guesses << " attempts left.\n\n" << flush;
    while(guesses > 0){
        int guess;
        cin >> guess;

        if(guess == target){
            cout << "Congratulations! You guessed the number in " << 11 - guesses << " attempts!\n" << flush;
            cout << "\nThe correct number was " << target;
            return 0;
        } else if(guess < target){
            cout << "Guess Higher\n" << flush;
        } else {
            cout << "Guess Lower\n" << flush;
        }
        guesses--;
        if(guesses != 1){
            cout << guesses << " attempts left\n\n" << flush;
        }
        else{
            cout << guesses << " attempt left\n\n DO NOT MISS THIS\n" << flush;
        }
    }

    cout << "You failed to guess the number, better luck next time.\n" << flush;
    cout << "The correct answer was " << target << flush;
    return 0;
}
