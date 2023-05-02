#include "Pets.h"
#include "Cat.h"
#include <iostream>
#include <fstream>
using namespace std;

Cat::Cat() {
	name = "Unknown";
	hunger_lvl = 75;
	sleepy_lvl = 80;
	happy_lvl = 50;
	color = "Unknown";
}
void Cat::getStats() {
  cout << "Name: " << name << endl;
  cout << "Tiredness (#/100): " << sleepy_lvl << endl;
  cout << "Hunger (#/100)   : " << hunger_lvl << endl;
  cout << "Happiness (#/100): " << happy_lvl << endl;
  cout << "Color            : " << color << endl;	
}

void Cat::speak() { 
	cout << "purrr....." << endl;
}

void Cat::Scratch() {
	cout << "Ouch!!" << endl;
	cout << "That must've hurt!" << endl;
}

void Cat::playWith() {

	cout << "---Playing with " << name << "---" << endl;
	cout << ".\n"
					".\n"
					".\n";
	sleepy_lvl += 10;
	hunger_lvl += 5;
	happy_lvl += 5;
	cout << " Sleepiness grew by 10.. \n"
				" Hunger grew by 5.. \n "
				"Happiness grew by 5.. \n ";

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

void Cat::Feed() {
	if (hunger_lvl == 0) {
		cout << name << " is not hunrgy!" << endl;
	}
	else {
		hunger_lvl -= 20;
		happy_lvl += 5;
		sleepy_lvl += 10;
		cout << "---Feeding " << name << " Some Chowder...---" << endl;
		cout << "Hunger decreased by 20..\n "
						"Sleepiness increased by 10..\n"
							"Happiness increased by 5..\n";
	}
}

void Cat::nextHour() {
	sleepy_lvl += 10;
	hunger_lvl += 5;
	happy_lvl -= 10;

	cout << ".\n"
					".\n"
					".\n";

	cout << "Hunger increased by 5..\n "
						"Sleepiness increased by 10..\n"
						"Happiness decreased by 10..\n";
	if (sleepy_lvl > 50) {
		cout << name << " is tired!" << endl;
	}
	if (hunger_lvl > 50) {
		cout << name << " is hungry!" << endl;
	}
	if (happy_lvl < 50) {
		cout << name << " is bored and wants to play!" << endl;
	}

}

void Cat::makeNap() {
	cout << "---Putting " << name << " To Bed---" << endl;
	cout << ".\n"
					".\n"
					".\n";
	sleepy_lvl -= 15;
	hunger_lvl += 10;
	cout << name << " Sleepiness decreased by 15.." << endl;
	cout << name << " Hunger increased by 10.." << endl;

}

void Cat::Train() {
	cout << "Training " << name << " to stop having hairballs!!" << endl;
	cout << ".\n"
					".\n"
					".\n";
	cout << "All of " << name << " stats have increased by 5!" << endl;
}

void Cat::yoyo() {
	cout << " Here's your favorite yoyo!!" << endl;
	cout << ".\n"
					".\n";
	cout << "purrrr... ^_^ " << endl;
	happy_lvl += 10;
	cout << "Happiness increased by 10" << endl;
}

void Cat::setColor(string userColor) {
	color = userColor;
	cout << "Color changed!" << endl;
}

string Cat::getColor() {
	return color;
}

void Cat::save() {
	ofstream fout("newPet.txt");
	fout << name << endl << hunger_lvl << endl << sleepy_lvl << endl << happy_lvl << endl << color;
	fout.close();
	cout << "Your stats have been saved!" << endl;
}

void Cat::load() {
	ifstream fin("newPet.txt");
	fin >> name >> hunger_lvl >> sleepy_lvl >> happy_lvl >> color;
	fin.close();
	cout << "Your previous stats have been loaded" << endl;
}
