#include <iostream>
#include <string>
using namespace std; 

class Human
{
private:
    string name;
    string eyes_color;
    string hair_color;
    string skill;
    double heigh;
    double beauty;
    double foot_size;

public:
    void SetName(string name);
    string GetName() const;
    void SetEye(string eye);
    string GetEye() const;
    void SetHair(string hair);
    string GetHair() const;
    void SetSkill(string skill);
    string GetSkill() const;
    void SetHeigh(double heigh);
    double GetHeigh() const;
    void SetBeauty(double beauty);
    double GetBeauty() const;
    void SetFoot(double foot);
    double GetFoot() const;
    void PetLover();
    void LatestNews();
    void Cooking(string pasta);
    void Lateness();
    void Hobby();
};
