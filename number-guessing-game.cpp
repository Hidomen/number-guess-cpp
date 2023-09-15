#include <iostream>
#include <ctime>

int main () {

    int guess;
    int tries = 0;
    int uplimit;
    srand(time(NULL));

    std::cout << "Spesify the uplimit of number: ";
    std::cin >> uplimit;
    // corrects to user input
    std::cin.clear();
    fflush(stdin);

    if(uplimit >= 10){
    int number = (rand() % uplimit) + 1; 

    std::cout << "# GUESS THE NUMBER [1-" << uplimit << "]: \n";
    
    do {
        std::cin >>guess;
        if ( guess > number ) {
            std::cout << "Too High\n";
        } else if ( guess < number ){
            std::cout << "Too Low\n";
        } else {
            std::cout << "CORRECT!";
        }
        tries++;
    } while (guess != number);
    std::cout << "\nFinally you found the #" << number << " in " << tries << " tries";

    } else {
        std::cout << "Your uplimit must be > or = 10\n";
        main();
    }
    return 0;
}
