#include <iostream>
#include <string>
using namespace std; 

class Phone
{
private:
    string phone_model;
    string color;
    double display_diagonol;
    double memory;
    int cameras_count;

public:
    void SetModel(string model);
    string GetModel() const;
    void SetColor(string color);
    string GetColor() const;
    void SetDisplay(double display);
    double GetDisplay() const;
    void SetMemory(double memory);
    double GetMemory() const;
    void SetCamera(int camera);
    int GetCamera() const;
    void CameraClick();
    void Photo();
    void Memory();
    void Calls();
    void Music();
};
