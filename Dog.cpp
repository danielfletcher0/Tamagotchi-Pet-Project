#include "Pets.h"
#include "Dog.h"
#include <iostream>
#include <fstream>
using namespace std;

Dog::Dog() {
	name = "Unknown";
	hunger_lvl = 30;
	sleepy_lvl = 30;
	happy_lvl = 80;
	breed = "Unknown";
}

void Dog::getStats() {
  cout << "Name: " << name << endl;
  cout << "Tiredness (#/100): " << sleepy_lvl << endl;
  cout << "Hunger (#/100)   : " << hunger_lvl << endl;
  cout << "Happiness (#/100): " << happy_lvl << endl;
  cout << "Breed            : " << breed << endl;
}

void Dog::speak() { //const
	cout << "'woof woof'" << endl;
	cout << "^-^" << endl;
}

void Dog::playWith() {
	sleepy_lvl += 10;
	hunger_lvl += 15;
	happy_lvl += 20;
	cout << "---Playing with " << name << "---" << endl;
	cout << ".\n"
				".\n"
				".\n";
	cout << " Sleepiness grew by 10.. \n"
					" Hunger grew by 15.. \n "
					"Happiness grew by 20.. \n ";

	if (sleepy_lvl > 50) {
		cout << name << " is now tired!" << endl;
	}
	if (hunger_lvl > 50) {
		cout << name << " is now hungry!" << endl;
	}
	if (happy_lvl < 50) {
		cout << name << " wants to keep playing!" << endl;
	}
}

void Dog::Feed() {

	if (hunger_lvl >= 100) {
		cout << name << " is not hunrgy!" << endl;
	}
	else {
		cout << "---Feeding " << name << " Some Chow Bits...---" << endl;
		hunger_lvl -= 20;
		sleepy_lvl += 15;
		happy_lvl += 10;
		cout << "Hunger decreased by 20..\n "
							"Sleepiness increased by 15..\n"
							"Happiness increased by 10..\n";
	}


}

void Dog::nextHour() {
	sleepy_lvl += 5;
	hunger_lvl += 5;
	happy_lvl -= 5;
	cout << ".\n"
					".\n"
					".\n";
	cout << "Hunger increased by 5..\n "
						"Sleepiness increased by 5..\n"
						"Happiness decreased by 5..\n"; 
	if (sleepy_lvl > 50) {
		cout << name << " is tired!" << endl;
	}
	if (hunger_lvl > 50) {
		cout << name << "is hungry!" << endl;
	}
	if (happy_lvl < 50) {
		cout << name << " is bored and wants to play!" << endl;
	}
}

void Dog::makeNap() {
	cout << "---Putting " << name << " To Bed---" << endl;
	cout << ".\n"
					".\n"
					".\n";
	sleepy_lvl -= 30;
	hunger_lvl += 10;
	cout << name << " Sleepiness decreased by 30.." << endl;
	cout << name << " Hunger increased by 10.." << endl;

}
void Dog::Rub() {
	cout << "who's a good dog!!" << endl;
	cout << ".\n"
					".\n";
	cout << "WOOF WOOF" << endl;
	happy_lvl += 5;
	cout << "Hapiness increased by 5.." << endl;
}

void Dog::Train() {
	cout << "--Training " << name << " To Be More Aggressive---" << endl;
	cout << ".\n"
					".\n"
					".\n";
	cout << "All of " << name << " stats increased by 5!" << endl;
	hunger_lvl += 5;
}

void Dog::Fetch() {
	cout << "Go fetch..." << endl; 
	cout << ".\n"
					".\n"
					".\n";
	cout << "ball retrieved by " << name << endl;
	happy_lvl += 15;
	hunger_lvl -= 5;
	sleepy_lvl += 5;
	cout << "Happiness increased by 15.." << endl;
	cout << "Sleepiness increased by 5.." << endl;
	cout << "Hunger decreased by 5.." << endl;
}

void Dog::setBreed(string userBreed) {
	breed = userBreed;
	cout << "Breed updated!" << endl;
}

string Dog::getBreed() {
	return breed;
}

void Dog::takeForWalk() {
	cout << "---Taking " << name << " For a Walk---" << endl;
	cout << ".\n"
					".\n"
					".\n";
	if (hunger_lvl > 65) {
		hunger_lvl -= 15;
		cout << "Hunger decreased by 15.." << endl;
	}
	else {
		hunger_lvl += 10;
		cout << "Hunger increased by 10" << endl;
	}
	happy_lvl += 10;
	cout << "Happiness increased by 10" << endl;
}

void Dog::save() {
	ofstream fout("newPet.txt");
	fout << name << endl << age << endl << hunger_lvl << endl << sleepy_lvl << endl << happy_lvl << endl << breed;
	fout.close();
	cout << "Your stats have been saved!" << endl;
}

void Dog::load() {
	ifstream fin("newPet.txt");
	fin >> name >> age >> hunger_lvl >> sleepy_lvl >> happy_lvl >> breed;
	fin.close();
	cout << "Your stats have been loaded" << endl;
}