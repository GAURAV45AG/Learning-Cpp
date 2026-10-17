#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std ;

int main(){

    srand(time(0));

    int x = rand() % 11;
    int a ;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Guess number between (1-10): ";
        cin >> a;

        attempts++;

        if(x == a) {
            cout << "That's correct! " << '\n';
            break;
        }

        else if (x > a) {
            cout << "Too low! " << '\n';
        }

        else {
            cout << "Too high! " << '\n';
        }
    }

    if (a != x && attempts == 3) {
    cout << "Game over! The number was " << x << '\n';
}

    return 0;
}