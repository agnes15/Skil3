#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "userinterface.h"

using namespace std;

struct Person
{
    string name;
    string gender;
    int birth;
    int death;
};


class Data
{
    public:
        Data();
        void readPerson(const string &filename);
        void addToList(const string &filename);
        void printList();
        void options();
        void print();
        void search();
        void printGender();
        void printAge();
        void printDead();
        void searchName();
        void searchDeathYear();


    private:
        vector<Person> nextPerson;
};

#endif // DATA_H
