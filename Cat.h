#include "Pets.h"
using namespace std;

class Cat : public Pets {
	public:
		Cat();
		void playWith();
		void makeNap();
		void Train();
		void Feed();
		void nextHour();
		void getStats();
		void Scratch();
		void speak();
		void yoyo();
		void setColor(string);
		string getColor();
		void save();
		void load();

	private:
		string color;
	

};