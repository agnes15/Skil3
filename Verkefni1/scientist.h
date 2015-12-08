#ifndef SCIENTIST_H
#define SCIENTIST_H

#include <QCoreApplication>
#include <string>
using namespace std;

class Scientist
{
public:
    Scientist();
    Scientist(int i, string n, int b, int d, string g);
    //Constructor with parameters

    int getID_Scientist();
    string getName_Scientist();
    string getGender_Scientist();
    int getBirth_Scientist();
    int getDeath_Scientist();
    //Get Functions to get private variables

    void setID_Scientist(int i);
    void setName_Scientist(string n);
    void setGender_Scientist(string g);
    void setBirth_Scientist(int b);
    void setDeath_Scientist(int d);
    //Set Functions to set private variables

private:
    int s_ID;
    string s_name;
    string s_gender;
    int s_birth;
    int s_death;
};

#endif // SCIENTIST_H
