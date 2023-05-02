#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#pragma once
#include <iostream>
using namespace std;

class Pets {
    public:
        Pets();
        void setName(string);
        string getName();

        virtual void playWith();
        virtual void makeNap();
        virtual void Train();
        virtual void Feed();
        virtual void nextHour();

        virtual void save();
        virtual void load();
        
    protected:
        string name;
        int age;
        int hunger_lvl;
        int sleepy_lvl;
        int happy_lvl;

};
