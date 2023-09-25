#include "Room.h"

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

    void Room::SetLocation(string location) {
        this->location = location;
    }
    string Room::GetLocation() const {
        return this->location;
    }

    void Room::SetSize(string size) {
        this->size = size;
    }
    string Room::GetSize() const {
        return this->size;
    }

    void Room::SetWindow(int window) {
        if (window == 1)
        {
            this->window_count = window;
        }
        else
        {
            cout << "There is only one window" << endl;
        }
    }
    int Room::GetWindow() const {
        return this->window_count;
    }

    void Room::SetResidents(int residents) {
        if (residents >= 1 && residents <= 4)
        {
            this->residents_count = residents;
        }
        else
        {
            cout << "There is no room to breathe" << endl;
        }
    }
    int Room::GetResidents() const {
        return this->residents_count;
    }

    void Room::SetComfort(double comfort) {
        if (comfort >= 6 && comfort <= 10)
        {
            this->comfort = comfort;
        }
        else
        {
            cout << "You would not be able to sleep with this comfort level" << endl;
        }
    }
    double Room::GetComfort() const {
        return this->comfort;
    }

    void Room::SleepPlace() {
        cout << "íà ï³äëîç³ ëåæèòü ìàòðàö, ùîá ñïàòè\n";
    }

    void Room::NeighborhoodNoises() {
        cout << "knock bdjsdchk!\n";
    }

    void Room::Food(string ramyeon) {
        cout << "äåñü á³ëÿ ðàêîâèíè º ðàìüîí" << ramyeon << "\n";
    }

    void Room::AirConditioner() {
        cout << "ôøøøøøø\n";
    }

    void Room::Door() {
        cout << "ãðàº ï³ñíÿ, êîëè â³ä÷³íÿþòüñÿ àáî çà÷èíÿþòüñÿ äâåð³\n";
    }
