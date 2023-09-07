#include <iostream>
#include <ctime>

using namespace std;

int main () {

    int guess;
    int tries = 0;
    int uplimit;
    srand(time(NULL));

    cout << "Spesify the uplimit of number: ";
    cin >> uplimit;

    int number = (rand() % uplimit) + 1; 

    cout << "# GUESS THE NUMBER [1-" << uplimit << "]: \n";
    
    do {
        cin >>guess;
        if ( guess > number ) {
            cout << "Too High" << endl;
        } else if ( guess < number ){
            cout << "Too Low" << endl;
        } else {
            cout << "CORRECT!";
        }
        tries++;
    } while (guess != number);
    cout << endl << "Finally you found the #" << number << " in " << tries << " tries";

    return 0;
}