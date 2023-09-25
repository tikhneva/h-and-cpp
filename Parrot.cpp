#include "Parrot.h"

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

    void Parrot::SetWings(int wings) {
        if (wings == 2)
        {
            this->wings = wings;
        }
        else
        {
            cout << "Parrot is not able to fly" << endl;
        }
    }
    int Parrot::GetWings() const {
        return this->wings;
    }

    void Parrot::SetLegs(int legs) {
        if (legs == 2)
        {
            this->legs_count = legs;
        }
        else
        {
            cout << "Parrot is not able to walk" << endl;
        }
    }
    int Parrot::GetLegs() const {
        return this->legs_count;
    }

    void Parrot::SetNick(string nick) {
        this->nick = nick;
    }
    string Parrot::GetNick() const {
        return this->nick;
    }

    void Parrot::SetPlumage(string plumage) {
        this->plumage_color = plumage;
    }
    string Parrot::GetPlumage() const {
        return this->plumage_color;
    }

    void Parrot::SetEyes(string eyes) {
        this->eyes_color = eyes;
    }
    string Parrot::GetEyes() const {
        return this->eyes_color;
    }

    void Parrot::MakeNoize() {
        cout << "ARH!\n";
    }

    void Parrot::Fly() {
        cout << "?????? ??????!\n";
    }

    void Parrot::Eat(string meal) {
        cout << "?????? ???? " << meal << "\n";
    }

    void Parrot::Sleep() {
        cout << "?????? ?????\n";
    }

    void Parrot::Stare() {
        cout << "?????? ????????? ???????? ?? ???\n";
    }
};
