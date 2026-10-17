#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    char playagain;

do{
    srand(time(0));

    int computerChoice = rand() % 3;
    string computerMove;
    int choice;

    if(computerChoice == 0){
        computerMove = "Rock";
    }

    else if(computerChoice == 1){
        computerMove = "Paper";
    }

    else{
        computerMove = "Scissors";
    }

    cout << "===========================" << endl;
    cout << "  ROCK PAPER SCISSORS GAME  " << endl;
    cout << "===========================" << endl;

    cout << "\nChoose your move:" << endl;

    cout << "\n1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 1){
        cout << "\nYour move: Rock" << endl;
        cout << "Computer's move: " << computerMove << endl;

        if(computerChoice == 0){
            cout << "It's a Tie!!" << endl;
        }

        else if(computerChoice == 1){
            cout << "You Lose!" << endl;
        }

        else{
            cout << "You Win!!" << endl;
        }
    }

    else if(choice == 2){
        cout << "\nYour move: Paper" << endl;
        cout << "Computer's move: " << computerMove << endl;

        if(computerChoice == 0){
            cout << "You Win!!" << endl;
        }

        else if(computerChoice == 1){
            cout << "It's a Tie!!" << endl;
        }

        else{
            cout << "You Lose!" << endl;
        }
}    

    else if(choice == 3){
        cout << "\nYour move: Scissors" << endl;
        cout << "Computer's move: " << computerMove << endl;

        if(computerChoice == 0){
            cout << "You Lose!" << endl;
        }

        else if(computerChoice == 1){
            cout << "You Win!!" << endl;
        }

        else{
            cout << "It's a Tie" << endl;
        }
    }

    else{
        cout << "\nInvalid choice!" << endl;

    }

    cout << "\nPlay again(y/n): ";
    cin >> playagain;

}while(playagain == 'y');

    return 0;
}