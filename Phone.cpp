#include "Phone.h"

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

    void Phone::SetModel(string model) {
        this->phone_model = model;
    }
    string Phone::GetModel() const {
        return this->phone_model;
    }

    void Phone::SetColor(string color) {
        this->color = color;
    }
    string Phone::GetColor() const {
        return this->color;
    }

    void Phone::SetDisplay(double display) {
        if (display == 5.4)
        {
            this->display_diagonol = display;
        }
        else
        {
            cout << "Wrong display diagonol" << endl;
        }
    }
    double Phone::GetDisplay() const {
        return this->display_diagonol;
    }

    void Phone::SetMemory(double memory) {
        if (memory >= 32 && memory <= 128)
        {
            this->memory = memory;
        }
        else
        {
            cout << "You do not have such memory on this phone" << endl;
        }
    }
    double Phone::GetMemory() const {
        return this->memory;
    }

    void Phone::SetCamera(int camera) {
        if (camera >= 1 && camera <= 2)
        {
            this->cameras_count = camera;
        }
        else
        {
            cout << "You can make pictures only with one or two cameras on this phone" << endl;
        }
    }
    int Phone::GetCamera() const {
        return this->cameras_count;
    }

    void Phone::CameraClick() {
        cout << "click\n";
    }

    void Phone::Photo() {
        cout << "çàðàç ÿê çðîáëþ ãàðíå ôîòî\n";
    }

    void Phone::Memory() {
        cout << "íà ïðèñòð¿ íåìàº â³ëüíîãî ì³ñöÿ\n";

    }
    void Phone::Calls() {
        cout << "âõ³äíèé äçâ³íîê\n";
    }

    void Phone::Music() {
        cout << "I feel the rush" << "\n" << "Addicted to your touch\n";
    }
