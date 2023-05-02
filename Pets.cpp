#include "Pets.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Pets::Pets() {

	name = "Unknown";
	hunger_lvl = 35;
	sleepy_lvl = 10;
	happy_lvl = 80;


}

void Pets::nextHour() {
	
}


void Pets::setName(string petName) {
	name = petName;
}
string Pets::getName() {
	return name;
}

void Pets::playWith() {
	
}
void Pets::makeNap() {

}
void Pets::Train() {

}
void Pets::Feed() {

}

void Pets::save() {
	
}
void Pets::load() {
	
}


