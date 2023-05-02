#include <iostream>
#include <string>
#include "Snake.cpp"
#include "Cat.cpp"
#include "Dog.cpp"
#include "Pets.cpp"

using namespace std;

int main()
{

    bool game_on = true;
    int user_key;
    cout << " Welcome to Daniel's Animal Daycare! " << endl;
    cout << 
            "           .--. \n"
            "           |__| .-------. \n"
            "           |=.| |.-----.| \n"
            "           |--| || D.F || \n"
            "           |  | |'-----'| \n"
            "           |__|~')_____(' \n";
            

    cout << "0 | Quit: " << endl;
    cout << "1 | Start a New Game" << endl;
    cout << "2 | Load Game" << endl;

    // Spacing between the menu screens
    cout << endl;
    while (game_on) {
        cin >> user_key;

        if (user_key == 0) {
            game_on = false;
            break;
        }
        if (user_key == 1) {

            int choice;

            cout << "Select Your Pet:" << endl;
            cout << " 0 | To go back" << endl;
            cout << " 1 | Snake" << endl;
            cout << " 2 | Cat" << endl;
            cout << " 3 | Dog" << endl;


            cout << "            /^\\/^\\  \n"
                    "          _|__|  O| \n"
                    "\\/     /~     \\_/ \\ \n"
                    " \\____|__________/  \\ \n"
                    "           \\_______      \\ \n"
                    "                   `\\     \\                \\ \n"
                    "                   |     |                  \\ \n"
                    "                   /      /                    \\ \n"
                    "                   /     /                       \\ \n"
                    "               /      /                         \\ \\ \n"
                    "               /     /                            \\  \\ \n"
                    "           /     /             _----_            \\   \\ \n"
                    "           /     /           _-~      ~-_         |   | \n"
                    "           (      (        _-~    _--_    ~-_     _/   | \n"
                    "           \\      ~-____-~    _-~    ~-_    ~-_-~    / \n"
                    "               ~-_           _-~          ~-_       _-~ \n"
                    "               ~--______-~                ~-___-~ \n ";

            cin >> choice;
            if (choice == 1) {
                cout << "Name Your Animal:" << endl;
                cout << endl;

                Snake pet_snake;
                string snakeName;
                cin >> snakeName;
                pet_snake.setName(snakeName);
                cout << pet_snake.getName() << " Current Stats" << endl;
                pet_snake.getStats();
                cout << endl;

                cout << "Click an option to interact with " << pet_snake.getName() << endl;
                while (choice != 0){
                    cout << " 0 | To Go Back" << endl;
                    cout << " 1 | To Play With" << endl;
                    cout << " 2 | To Make Nap / Hibernate" << endl;
                    cout << " 3 | To Train" << endl;
                    cout << " 4 | To Feed" << endl;
                    cout << " 5 | To Change Species" << endl;
                    cout << " 6 | To Change Name" << endl;
                    cout << " 7 | To hear your pet speak" << endl;
                    cout << " 8 | To View Stats" << endl;
                    cout << " 9 | For an Hour Time Lapse" << endl;
                    cout << " 10 | To Save Your Current Progress" << endl;
                    cout << " 11 | To Load Your Past Progress" << endl;
                    cin >> choice;
                    if (choice == 1) {
                        pet_snake.playWith();
                        cout << endl;
                    }
                    if (choice == 2) {
                        pet_snake.makeNap();
                        cout << endl;
                    }
                    if (choice == 3) {
                        pet_snake.Train();
                    }
                    if (choice == 4) {
                        pet_snake.Feed();
                    }
                    if (choice == 5) {
                        string tempSpecies;
                        cout << "Enter the species your snake belongs to!" << endl;
                        cin >> tempSpecies;
                        pet_snake.setSpecies(tempSpecies);
                        cout << endl;
                    }
                    if (choice == 6) {
                        string tempSnakeName;
                        cout << "What's the new Name?" << endl;
                        cin >> tempSnakeName;
                        pet_snake.setName(tempSnakeName);
                        cout << "Name has been updated!" << endl;
                        cout << endl;
                    }
                    if (choice == 7){
                        pet_snake.speak();
                    }
                    if (choice == 8) {
                        pet_snake.getStats();
                        cout << endl;
                    }
                    if (choice == 9) {
                        pet_snake.nextHour();
                        cout << endl;
                    }
                    if (choice == 10) {
                        pet_snake.getStats();
                        cout << endl;
                    }
                    if (choice == 11) {
                        pet_snake.load();
                        cout << endl;
                    }
                }

            }

            if (choice == 2) {
                cout <<    "/\\_____/\\ \n"
                          "/  o   o  \\ \n"
                         "( ==  ^  == ) \n"
                          ")         ( \n"
                         "(           ) \n"
                        "( (  )   (  ) ) \n"
                       "(__(__)___(__)__) \n";
                cout << endl;
                cout << "Name Your Animal:" << endl;
                cout << endl;

                Cat pet_cat;
                string catName;
                cin >> catName;
                pet_cat.setName(catName);
                cout << pet_cat.getName() << " Current Stats" << endl;
                pet_cat.getStats();
                cout << endl;

                while (choice != 0){
                    cout << " 0 | To Go Back" << endl;
                    cout << " 1 | To Play With" << endl;
                    cout << " 2 | To Make Nap" << endl;
                    cout << " 3 | To Train" << endl;
                    cout << " 4 | To Feed" << endl;
                    cout << " 5 | To Give a YoYo" << endl;
                    cout << " 6 | To Scratch" << endl;
                    cout << " 7 | To Change it's Color" << endl;
                    cout << " 8 | To Change Name" << endl;
                    cout << " 9 | To hear your pet speak" << endl;
                    cout << " 10 | To View Stats" << endl;
                    cout << " 11 | For an Hour Time Lapse" << endl;
                    cout << " 12 | To Save Your Current Progress" << endl;
                    cout << " 13 | To Load Your Past Game" << endl;
                    cin >> choice;
                    if (choice == 1){
                        pet_cat.playWith();
                        cout << endl;
                    }
                    if (choice == 2){
                        pet_cat.makeNap();
                        cout << endl;
                    }
                    if (choice == 3){
                        pet_cat.Train();
                        cout << endl;
                    }
                    if (choice == 4){
                        pet_cat.Feed();
                        cout << endl;
                    }
                    if (choice == 5){
                        pet_cat.yoyo();
                        cout << endl;
                    }
                    if (choice == 6){
                        pet_cat.Scratch();
                        cout << endl;
                    }
                    if (choice == 7){
                        string tempColor;
                        cout << "What's the color of your cat?" << endl;
                        cin >> tempColor;
                        pet_cat.setColor(tempColor);
                        cout << endl;
                    }
                    if (choice == 8){
                        string tempCatName;
                        cout << "Enter in a new name" << endl;
                        cin >> tempCatName;
                        pet_cat.setName(tempCatName);
                        cout << endl;
                    }
                    if (choice == 9){
                        pet_cat.speak();
                        cout << endl;
                    }
                    if (choice == 10){
                        pet_cat.getStats();
                        cout << endl;
                    }
                    if (choice == 11){
                        pet_cat.nextHour();
                        cout << endl;
                    }
                    if (choice == 12){
                        pet_cat.save();
                        cout << endl;
                    }
                    if (choice == 13){
                        pet_cat.load();
                        cout << endl;
                    }
                }
            }

            if (choice == 3) {
                cout << "    ___ \n "
                "__/_  `.  .-\"\"\"-. \n "
                "\\_,` | \\-'  /   )`-') \n"
                " \"\") `\"`    \\  ((`\"` \n" 
                " ___Y  ,    .'7 /| \n"
                "(_,___/...-` (_/_/ \" \n";
                cout << endl;
                cout << "Name Your Animal:" << endl;
                cout << endl;

                Dog pet_dog;
                string dogName;
                cin >> dogName;
                pet_dog.setName(dogName);
                cout << pet_dog.getName() << " Current Stats" << endl;
                pet_dog.getStats();
                cout << endl;

                while (choice != 0){
                    cout << " 0 | To Go Back" << endl;
                    cout << " 1 | To Play With" << endl;
                    cout << " 2 | To Make Nap" << endl;
                    cout << " 3 | To Train" << endl;
                    cout << " 4 | To Feed" << endl;
                    cout << " 5 | To Play Fetch" << endl;
                    cout << " 6 | To Rub" << endl;
                    cout << " 7 | To Take For a Walk" << endl;
                    cout << " 8 | To Change Name" << endl;
                    cout << " 9 | To hear your pet speak" << endl;
                    cout << " 10 | To View Stats" << endl;
                    cout << " 11 | To Change the Breed of your Dog" << endl;
                    cout << " 12 | For an Hour Time Lapse" << endl;
                    cout << " 13 | To Save Your Current Progress" << endl;
                    cout << " 14 | To Load Your Past Progress" << endl;
                    cin >> choice;
                    if (choice == 1){
                        pet_dog.playWith();
                        cout << endl;
                    }
                    if (choice == 2){
                        pet_dog.makeNap();
                        cout << endl;
                    }
                    if (choice == 3){
                        pet_dog.Train();
                        cout << endl;
                    }
                    if (choice == 4){
                        pet_dog.Feed();
                        cout << endl;
                    }
                    if (choice == 5){
                        pet_dog.Fetch();
                        cout << endl;
                    }
                    if (choice == 6){
                        pet_dog.Rub();
                        cout << endl;
                    }
                    if (choice == 7){
                        pet_dog.takeForWalk();
                        cout << endl;
                    }
                    if (choice == 8){
                        string tempDogName;
                        cout << "Enter your dog's new name" << endl;
                        cin >> tempDogName;
                        pet_dog.setName(tempDogName);
                        cout << "Your dog's name has been changed!" << endl;
                        cout << endl;
                    }
                    if (choice == 9){
                        pet_dog.speak();
                        cout << endl;
                    }
                    if (choice == 10){
                        pet_dog.getStats();
                        cout << endl;
                    }
                    if (choice == 11){
                        string tempDogBreed;
                        cout << "Enter the breed of your dog" << endl;
                        cin >> tempDogBreed;
                        pet_dog.setBreed(tempDogBreed);
                        cout << endl;
                    }
                    if (choice == 12){
                        pet_dog.nextHour();
                        cout << endl;
                    }
                    if (choice == 13){
                        //pet_dog.speak();
                        //cout << endl;
                    }
                }
            }
            if (choice == 0) {
            cout << "0 | Quit: " << endl;
            cout << "1 | Start a New Game" << endl;
            cout << "2 | Continue with a Saved Game" << endl;              
            }  

        }

        if (user_key == 2) {
            int choice;
            cout << "Select Your Pet:" << endl;
            cout << " 0 | To go back" << endl;
            cout << " 1 | Snake" << endl; // will implement in the future
            cout << " 2 | Cat" << endl;
            cout << " 3 | Dog" << endl; // will implement in the future
            cin >> choice;
            if (choice == 2) {
                cout <<    "/\\_____/\\ \n"
                          "/  o   o  \\ \n"
                         "( ==  ^  == ) \n"
                          ")         ( \n"
                         "(           ) \n"
                        "( (  )   (  ) ) \n"
                       "(__(__)___(__)__) \n";
                cout << endl;

                Cat pet_cat;
                cout << pet_cat.getName() << " Current Stats" << endl;
                pet_cat.getStats();
                cout << endl;

                while (choice != 0){
                    cout << " 0 | To Go Back" << endl;
                    cout << " 1 | To Play With" << endl;
                    cout << " 2 | To Make Nap" << endl;
                    cout << " 3 | To Train" << endl;
                    cout << " 4 | To Feed" << endl;
                    cout << " 5 | To Give a YoYo" << endl;
                    cout << " 6 | To Scratch" << endl;
                    cout << " 7 | To Change it's Color" << endl;
                    cout << " 8 | To Change Name" << endl;
                    cout << " 9 | To hear your pet speak" << endl;
                    cout << " 10 | To View Stats" << endl;
                    cout << " 11 | For an Hour Time Lapse" << endl;
                    cout << " 12 | To Save Your Current Progress" << endl;
                    cout << " 13 | To Load Your Past Game" << endl;
                    cin >> choice;
                    if (choice == 1){
                        pet_cat.playWith();
                        cout << endl;
                    }
                    if (choice == 2){
                        pet_cat.makeNap();
                        cout << endl;
                    }
                    if (choice == 3){
                        pet_cat.Train();
                        cout << endl;
                    }
                    if (choice == 4){
                        pet_cat.Feed();
                        cout << endl;
                    }
                    if (choice == 5){
                        pet_cat.yoyo();
                        cout << endl;
                    }
                    if (choice == 6){
                        pet_cat.Scratch();
                        cout << endl;
                    }
                    if (choice == 7){
                        string tempColor;
                        cout << "What's the color of your cat?" << endl;
                        cin >> tempColor;
                        pet_cat.setColor(tempColor);
                        cout << endl;
                    }
                    if (choice == 8){
                        string tempCatName;
                        cout << "Enter in a new name" << endl;
                        cin >> tempCatName;
                        pet_cat.setName(tempCatName);
                        cout << endl;
                    }
                    if (choice == 9){
                        pet_cat.speak();
                        cout << endl;
                    }
                    if (choice == 10){
                        pet_cat.getStats();
                        cout << endl;
                    }
                    if (choice == 11){
                        pet_cat.nextHour();
                        cout << endl;
                    }
                    if (choice == 12){
                        pet_cat.save();
                        cout << endl;
                    }
                    if (choice == 13){
                        pet_cat.load();
                        cout << endl;
                    }
                    else {
                        break;
                    }
                }
            }

        }


    }
    cout << "Thank You For Playing!" << endl;

    return 0;
}

