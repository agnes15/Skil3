#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <iostream>
#include <vector>
#include "data.h"
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class UserInterface
{
public:
    UserInterface();
    void MainMenu();
    bool validinput(int x);
    void options();
    bool validinputOptions(int x);
};

#endif // USERINTERFACE_H