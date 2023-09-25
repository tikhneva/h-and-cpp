#include "Human.h"

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

    void Human::SetName(string name) {
        this->name = name;
    }
    string Human::GetName() const {
        return this->name;
    }

    void Human::SetEye(string eye) {
        this->eyes_color = eye;
    }
    string Human::GetEye() const {
        return this->eyes_color;
    }

    void Human::SetHair(string hair) {
        this->hair_color = hair;
    }
    string Human::GetHair() const {
        return this->hair_color;
    }

    void Human::SetSkill(string skill) {
        this->skill = skill;
    }
    string Human::GetSkill() const {
        return this->skill;
    }

    void Human::SetHeigh(double heigh) {
        if (heigh == 163)
        {
            this->heigh = heigh;
        }
        else
        {
            cout << "This is the wrong heigh of this person" << endl;
        }
    }
    double Human::GetHeigh() const {
        return this->heigh;
    }

    void Human::SetBeauty(double beauty) {
        if (beauty >= 100)
        {
            this->beauty = beauty;
        }
        else
        {
            cout << "My human cannot be less than 100% beautiful!!" << endl;
        }
    }
    double Human::GetBeauty() const {
        return this->beauty;
    }

    void Human::SetFoot(double foot) {
        if (foot >= 36 && foot <= 38)
        {
            this->foot_size = foot;
        }
        else
        {
            cout << "Wrong foot size" << endl;
        }
    }
    double Human::GetFoot() const {
        return this->foot_size;
    }

    void Human::PetLover() {
        cout << "äèâè ÿêå êîøåíÿ!\n";
    }

    void Human::LatestNews() {
        cout << "ÿ òîá³ çàðàç òàêå ðîçïîâ³ì!\n";
    }

    void Human::Cooking(string pasta) {
        cout << "*Àë³ñà ãîòóº ñìà÷íó ñòðàâó äëÿ ïîäðóãè*" << pasta << "\n";
    }

    void Human::Lateness() {
        cout << "âèáà÷òå çà çàï³çíåííÿ\n";
    }

    void Human::Hobby() {
        cout << "äàâàé ñþäè ñâîþ ëàïöþ\n";
    }
