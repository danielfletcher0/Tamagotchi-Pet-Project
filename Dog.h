#include "Pets.h"
using namespace std;

class Dog : public Pets {
	public:
		Dog();
		void playWith();
		void makeNap();
		void Train();
		void Feed();
		void nextHour();
		void speak();
		void getStats();
		void Rub();
		void takeForWalk();
		void Fetch();
		void setBreed(string);
		string getBreed();
		void save();
		void load();
	private:
		string breed;
};

