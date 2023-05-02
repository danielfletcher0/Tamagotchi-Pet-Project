#include "Pets.h"
#include <iostream>
#include <fstream>
using namespace std;

class Snake : public Pets {
	public:
		Snake();
		void playWith();
		void Feed();
		void Train();
		void makeNap();
		void speak(); //const and =0;
		void nextHour();
		void getStats();
		void setSpecies(string);
		void save();
		void load();
		string getSpecies();

		private:
			string species;
};

