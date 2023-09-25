#include <iostream>
#include <string>
using namespace std;

class Parrot
{
private:
    int wings;
    int legs_count;
    string nick;
    string plumage_color;
    string eyes_color;

public:
    void SetWings(int wings);
    int GetWings() const;
    void SetLegs(int legs);
    int GetLegs() const;
    void SetNick(string nick);
    string GetNick() const;
    void SetPlumage(string plumage);
    string GetPlumage() const;
    void SetEyes(string eyes);
    string GetEyes() const;
    void MakeNoize();
    void Fly();
    void Eat(string meal);
    void Sleep();
    void Stare();
};
