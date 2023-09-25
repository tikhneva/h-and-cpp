#include <iostream>
#include <string>
using namespace std; 

class Room
{
private:
    string location;
    string size;
    int window_count;
    int residents_count;
    double comfort;

public:
    void SetLocation(string location);
    string GetLocation() const;
    void SetSize(string size);
    string GetSize() const;
    void SetWindow(int window);
    int GetWindow() const;
    void SetResidents(int residents);
    int GetResidents() const;
    void SetComfort(double comfort);
    double GetComfort() const;
    void SleepPlace();
    void NeighborhoodNoises();
    void Food(string ramyeon);
    void AirConditioner();
    void Door();
};
