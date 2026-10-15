#include <iostream>
using namespace std;

int main(){

    int health = 100;
    int choice;
    int points = 0;
    bool treasureCollected = false;
    bool playing = true;

    while(playing == true){

    cout << "=== SHADOW DUNGEON ===" << endl;

    cout << "1. Left Door" << endl <<
        "2. Dark Tunnel" << endl << 
        "3. Check Health" << endl <<
        "4. Healing Room" << endl << 
        "5. Treasure Room" << endl << 
        "6. Check Score" << endl <<
        "7. Exit Game" << endl ;

    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1){
        health = health - 15;

        cout << "You triggered a trap! -15 HP" << endl;
        
        if(health <= 0){
            health = 0;

            cout << "Game Over! You died in the dungeon." << endl;
            playing = false;
        }
        else if(health <= 30){
            cout << "Warning = Your HP is low!!" << endl;
        }
    }

    else if(choice == 2){
        health = health - 20;

        cout << "A monster attacked you! -20 HP" << endl;

        if(health <= 0){
            health = 0;

            cout << "Game Over! You died in the dungeon." << endl;
            playing = false;
        }
            else if(health <= 30){
            cout << "Warning = Your HP is low!!" << endl;
        }
        
    }

    else if(choice == 3){
        cout << "Your current health: " << health << endl;
    }

    else if(choice == 4){
        if(health < 100){
            health = health + 25;

            if(health > 100){
                health = 100;
            }

            cout << "You used Healing Potion! +25 HP" << endl;
            cout << "Your current health: " << health << endl;
        }
        else if(health >= 100){
            health = 100;

            cout << "You're Health is already full!" << endl;
        }
    }

    else if(choice == 5){
        if(treasureCollected == false){
        points = points + 50;
        treasureCollected = true;

        cout << "You found a Treasure! +50 Points" << endl;
        cout << "Points = " << points << endl;
        }

        else{
            cout << "You already collected Treasure!" << endl;
        }
    }

    else if(choice == 6){
        cout << "Your Points = " << points << endl;
        cout << "Your HP = " << health << endl; 
    }

    else if(choice == 7){

        playing = false;

        cout << "Escaping the dungeon...." << endl;
    }

    else{
        cout << "Invalid choice! Try again." << endl;
    }
}

    return 0;
}