#include "Pets.h"
#include "Snake.h"
#include <iostream>
#include <fstream>
using namespace std;

Snake::Snake() {
  name = "Unknown";
  sleepy_lvl = 25;
  hunger_lvl = 65;
  happy_lvl = 50;
  species = "Unknown";
}

void Snake::getStats() {
  cout << "Name: " << name << endl;
  cout << "Tiredness (#/100): " << sleepy_lvl << endl;
  cout << "Hunger (#/100)   : " << hunger_lvl << endl;
  cout << "Happiness (#/100): " << happy_lvl << endl;
  cout << "Species          : " << species << endl;
}
void Snake::playWith() {
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
void Snake::makeNap() {
  if (hunger_lvl > 80 && sleepy_lvl > 80) {
    cout << "---" << name << " is Now Starting Hibernation---" << endl;
    cout << ".\n"
            ".\n"
            ".\n";
    hunger_lvl -= 50;
    sleepy_lvl -= 50;
    happy_lvl += 20;
    cout << "hissss" << endl;
    cout << "Hunger decreased by 50..\n "
              "Sleepiness decreased by 50..\n"
              "Happiness increased by 20..\n";
  }
  else {
    cout << "---" << name << " is Taking a Nap" << endl;
    cout << name << "'s Hunger and Happiness level must be greater than 80 for " << endl;
    cout << "it to go on Hibernation" << endl;
    cout << ".\n"
            ".\n";
    hunger_lvl -= 15;
    sleepy_lvl -= 15;
    happy_lvl += 5;
    cout << "Hunger decreased by 15..\n "
              "Sleepiness decreased by 15..\n"
              "Happiness increased by 5..\n";    
  }
}
void Snake::Train() {
  cout << "---Training " << name << " to Swallow Aligators---" << endl;
  cout << ".\n"
          ".\n"
          ".\n";
  hunger_lvl += 10;
  sleepy_lvl += 10;
  happy_lvl += 10;
  cout << "All of " << name << "Stats Has Increased by 10!" << endl;
}
void Snake::Feed() {
	if (hunger_lvl >= 100) {
		cout << name << " is not hunrgy!" << endl;
	}
	else {
		cout << "---Feeding " << name << " Some Mice...---" << endl;
		hunger_lvl -= 10;
		sleepy_lvl += 15;
		happy_lvl += 5;
		cout << "Hunger decreased by 10..\n "
							"Sleepiness increased by 15..\n"
							"Happiness increased by 5..\n";
	}


}
void Snake::speak() {
  cout << "hissssss" << endl;
}
void Snake::nextHour() {
	sleepy_lvl += 15;
	hunger_lvl += 10;
	happy_lvl -= 5;
	cout << ".\n"
					".\n"
					".\n";
	cout << "Hunger increased by 10..\n "
						"Sleepiness increased by 15..\n"
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


void Snake::setSpecies(string userSpecies) {
  species = userSpecies;
  cout << "Species updated!" << endl;
}
string Snake::getSpecies() {
  return species;
}

void Snake::save() {
	ofstream fout("newPet.txt");
	fout << name << endl << age << endl << hunger_lvl << endl << sleepy_lvl << endl << happy_lvl << endl << species;
	fout.close();
}

void Snake::load() {
  ifstream fin("newPet.txt");
	fin >> name >> age >> hunger_lvl >> sleepy_lvl >> happy_lvl >> species;
	fin.close();
}